    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            vector<int> vec(n);
            for(int i=0;i<n;i++)
            {
                cin>>vec[i];
            }
            // sort(vec.begin(),vec.end());
            int f=vec[0];
            for(int i=1;i<n;i++)
            {
                f=f&vec[i];
            }
            cout<<f<<endl;
        }
    }