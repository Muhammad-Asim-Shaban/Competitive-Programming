#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int ans = 0;
        vector<int> lens;

        for(int i = 0; i < n; )
        {
            if(str[i] == '1')
            {
                ans++;
                i++;
            }
            else
            {
                int l = i;
                while(i < n && str[i] == '0')
                {
                    i++;
                }
                int r = i - 1;

                int len = r - l + 1;
                int c = (l == 0) + (r == n-1);

                ans += (len + c) / 3;
            }
        }

        cout << ans << endl;
    }
}