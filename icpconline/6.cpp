#include <bits/stdc++.h>
using namespace std;

const int MODULO = 1000000007;
const int MID = 2000;
const int MAX_SUM = 4000;

long long factorial[8005], invFactorial[8005];
long long ways[6005];
int freq[MAX_SUM + 5][MID + 5];

long long modPow(long long base, long long exp) 
{
    long long res = 1;
    while(exp) {
        if(exp & 1) res = res*base%MODULO;
        base = base*base%MODULO;
        exp >>= 1;
    }
    return res;
}

long long comb(int n, int k) 
{
    if(k<0||k>n) return 0;
    return factorial[n]*invFactorial[k]%MODULO*invFactorial[n - k]%MODULO;
}

void printWays(int sz) 
{
    for(int i=0;i<=sz;i++)
        cout<<ways[i]<<" ";
    cout<<endl;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    factorial[0] = invFactorial[0] = 1;
    for(int i=1;i<=8000;i++) {
        factorial[i] = factorial[i-1]*i%MODULO;
        invFactorial[i] = modPow(factorial[i], MODULO - 2);
    }

    int nPoints;
    cin >> nPoints;

    long long diagTotal = 0;
    for(int i=0;i<nPoints;i++) {
        int x, y;
        cin >> x >> y;
        int sumXY = x + y;
        freq[sumXY][MID - x]++;
        diagTotal = (diagTotal + comb(2*sumXY, 2*x))%MODULO;
    }

    int maxIndex = 0;
    for(int s=MAX_SUM;s>=0;s--) {
        if(s<MAX_SUM) {
            for(int j=maxIndex+1;j>=1;j--)
                ways[j] = (ways[j] + ways[j-1])%MODULO;
            maxIndex++;
        }

        for(int offset=0;offset<=MID;offset++) {
            if(freq[s][offset]) {
                ways[offset] = (ways[offset] + freq[s][offset])%MODULO;
                maxIndex = max(maxIndex, offset);
                // cout<<offset<<endl;
            }
        }
    }

    long long totalPairs = 0;
    int tgt = 2*MID;
    for(int i=0;i<=tgt;i++) {
        if(i <= maxIndex && tgt - i <= maxIndex)
            totalPairs = (totalPairs + ways[i]*ways[tgt-i])%MODULO;
    }

    long long answer = (totalPairs - diagTotal + MODULO)%MODULO;
    answer = answer*modPow(2, MODULO-2)%MODULO;

    cout<<answer<<endl;
    return 0;
}
