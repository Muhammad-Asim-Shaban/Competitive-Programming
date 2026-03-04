#include <bits/stdc++.h>
using namespace std;

struct Node {
    int candidate;
    int count;
};

Node merge(Node a, Node b) {
    if (a.candidate == b.candidate) {
        return {a.candidate, a.count + b.count};
    }
    if (a.count > b.count) {
        return {a.candidate, a.count - b.count};
    } else {
        return {b.candidate, b.count - a.count};
    }
}

const int MAXN = 200005;
Node tree[4 * MAXN];
vector<int> arr;

void build(int node, int start, int end) {
    if (start == end) {
        tree[node] = {arr[start], 1};
        return;
    }
    int mid = (start + end) / 2;
    build(2 * node, start, mid);
    build(2 * node + 1, mid + 1, end);
    tree[node] = merge(tree[2 * node], tree[2 * node + 1]);
}

Node query(int node, int start, int end, int l, int r) {
    if (r < start || end < l) {
        return {0, 0};
    }
    if (l <= start && end <= r) {
        return tree[node];
    }
    int mid = (start + end) / 2;
    Node left = query(2 * node, start, mid, l, r);
    Node right = query(2 * node + 1, mid + 1, end, l, r);
    return merge(left, right);
}

int countOccurrences(const vector<int>& positions, int l, int r) {
    auto left = lower_bound(positions.begin(), positions.end(), l);
    auto right = upper_bound(positions.begin(), positions.end(), r);
    return distance(left, right);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, Q;
    cin >> N >> Q;
    
    arr.resize(N + 1);
    map<int, vector<int>> positions;
    
    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
        positions[arr[i]].push_back(i);
    }
    
    build(1, 1, N);
    
    while (Q--) {
        int L, R;
        cin >> L >> R;
        
        Node candidateNode = query(1, 1, N, L, R);
        int candidate = candidateNode.candidate;
        
        if (candidate == 0) {
            cout << "0\n";
            continue;
        }
        
        int length = R - L + 1;
        int required = length / 2 + 1;
        
        int count = countOccurrences(positions[candidate], L, R);
        
        if (count >= required) {
            cout << candidate << "\n";
        } else {
            cout << "0\n";
        }
    }
    
    return 0;
}