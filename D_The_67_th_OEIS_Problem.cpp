#include<bits/stdc++.h>
using namespace std;

vector<long long> primes;

void sieve(int lim)
{
    vector<bool> is_prime(lim+1, true);
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i<=lim;i++)
    {
        if(is_prime[i])
        {
            primes.push_back(i);
            for(long long j=(long long)i*i;j<=lim;j+=i)
            {
                is_prime[j]=false;
            }      
        }
    }
}

int main()
{
    sieve(200000); 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cout <<primes[i]*primes[i+1];
            if(i<n-1)
            {
                cout<<" ";
            } 
        }
        cout<<endl;
    }
}