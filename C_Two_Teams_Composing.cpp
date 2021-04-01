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
#define N 200005
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
    ll t;cin>>t;
    while(t--){
    ll n;
    cin>>n;
    ll ans=0;
    ll a[n];
    map<ll,ll>m;
    f(i,n){cin>>a[i];
    m[a[i]]++;
    }
    ll val;
 for(auto x:m){
     if(x.second>ans){
         ans=x.second;
         val=x.first;
     }
 }
 ll ans2=0;
 for(auto x:m){
     if(x.first!=val){
         ans2++;
     }

 }
 
     if(ans-ans2>1){
         cout<<ans2+1<<endl;
     }
 
 else cout<<min(ans,ans2)<<endl;


    }
   
}