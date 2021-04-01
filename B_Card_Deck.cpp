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
    ll t;cin>>t;
    while(t--){
       ll n;
       cin>>n;
       ll a[n+1];
     vl v;
       ll c[n+1];
       for(ll i=1;i<=n;i++){
           cin>>a[i];
           c[a[i]]=i;
          }

          for(ll j=n;j>0;j--){

              ll p=c[j];
              while(p<=n and a[p]!=0){
                  v.pb(a[p]);
                  a[p]=0;
                  p++;
              }
          }
          for(auto x:v){
              cout<<x<<" ";
          }
          cout<<endl;

    }
   
}