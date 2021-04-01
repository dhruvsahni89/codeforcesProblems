#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,n) for(int i=0;i<n;i++)
#define endl ("\n")
#define pb push_back
#define mp make_pair
#define pl pair<ll, ll>
#define vl vector<ll>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define N 100005
#define M 1000000007
void SieveOfEratosthenes(ll n)
{
    
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (ll p = 2; p * p <= n; p++)
    {
        
        if (prime[p] == true) 
        {
           
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
  
    for (ll p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}

int main()
{
    fastIO
    ll t=1;
    while(t--){
        ll n;
        ll k;
        string s;
ll idx=n-1;

        cin>>n>>k;
        cin>>s;
       if(n==1&&k>0)
        cout<<0<<endl;
    else
    {
        if(s[0]!='1'&&k>0)
        {
            s[0]='1';
            k--;
        }
       ll i=1;
        while(1)
        {
            if(s[i]!='0'&&k>0)
            {
                s[i]='0';
                k--;
            }
            i++;
            if(i==n||k==0)
                break;
        }
        cout<<s<<endl;

      
    }
    }
   
}