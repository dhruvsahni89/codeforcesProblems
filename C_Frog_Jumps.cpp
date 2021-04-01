#include <bits/stdc++.h>
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

 ll t;cin>>t;
 while(t--){
     
     string s;
     cin>>s;
    ll n=s.length();
    ll j=n+1;
    for(ll i=n-1;i>=0;i--){
        if(s[i]=='R'){
            j=j-i-1;
            break;
        }
    }
    // vl v;
    // f(i,n){
    //     if(s[i]=='R')v.pb(i+1);
    // }
    // sort(v.begin(),v.end());
    // ll ans2=v[0];
    // for(ll c=1;c<v.size();c++){
    //     ans2=max(ans2,v[c]-v[c-1]);
    // }
    ll ans=0;
    ll x=-1;
    
    for(ll i=0;i<n;i++){
        if(s[i]=='R'){
            ans=max(ans,i-x);
            x=i;
        }


    }
  
   
   
    ans=max(ans,j);
    cout<<ans<<endl;
 }
}