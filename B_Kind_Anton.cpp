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
     ll a[n];
     ll b[n];
     f(i,n)cin>>a[i];
     f(j,n)cin>>b[j];
     ll plus=0,minus=0;
ll ans=1;
     f(k,n){
         if(b[k]>a[k] and plus==0){
             
             ans=0;
             break;

         }
         if(b[k]<a[k] and minus==0){
             ans=0;
             break;
         }
         if(a[k]==1)plus=1;
         if(a[k]==-1)minus=1;


     }
     if(ans)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    }
   
}