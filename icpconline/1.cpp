#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    long long data;
    TreeNode* lchild, * rchild;
    TreeNode(long long val) : data(val), lchild(nullptr), rchild(nullptr) {}
};

TreeNode* ctftp(const vector<long long>& values) {
    if (values.empty() || values[0] == -1) return nullptr;
    TreeNode* root = new TreeNode(values[0]);
    queue<TreeNode*> nodes;
    nodes.push(root);
    int idx = 1;
    while (!nodes.empty() && idx < values.size()) {
        TreeNode* curr = nodes.front();
        nodes.pop();
        if (idx < values.size() && values[idx] != -1) {
            curr->lchild = new TreeNode(values[idx]);
            nodes.push(curr->lchild);
        }
        idx++;
        if (idx < values.size() && values[idx] != -1) {
            curr->rchild = new TreeNode(values[idx]);
            nodes.push(curr->rchild);
        }
        idx++;
    }
    return root;
}

struct NodeInfo {
    bool bst;
    long long total;
    long long minimum;
    long long maximum;
};

class BSTSolver {
public:
    long long maxSum = 0;

    NodeInfo trav(TreeNode* node) {
        if (!node)
            return { true, 0, LLONG_MAX, LLONG_MIN };

        NodeInfo left = trav(node->lchild);
        NodeInfo right = trav(node->rchild);

        NodeInfo curr;

        if (left.bst && right.bst && left.maximum < node->data && node->data < right.minimum) {
            curr.bst = true;
            curr.total = left.total + right.total + node->data;
            curr.minimum = (left.minimum == LLONG_MAX ? node->data : left.minimum);
            curr.maximum = (right.maximum == LLONG_MIN ? node->data : right.maximum);
            maxSum = max(maxSum, curr.total);
        } else {
            curr.bst = false;
            curr.total = 0;
            curr.minimum = LLONG_MIN;
            curr.maximum = LLONG_MAX;
        }
        return curr;
    }

    long long fms(TreeNode* root) {
        maxSum = 0;
        trav(root);
        return maxSum;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    stringstream ss(s);
    vector<long long> numsnums;
    long long val;
    while (ss >> val)
        numsnums.push_back(val);

    TreeNode* root = ctftp(numsnums);

    BSTSolver solver;
    cout << solver.fms(root);
    return 0;
}
