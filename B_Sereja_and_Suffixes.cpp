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
vl v;
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
            v.pb(p*p);
}

int main()
{
    fastIO
   
   
   ll n,m;
   cin>>n>>m;
   map<ll,ll>m1;
   ll a[n];
   f(i,n){
       cin>>a[i];
       
   }
   ll ans[n]={0};
   ans[n]=1;
   for(ll j=n;j>0;j--){
       
      if(m1[a[j-1]]>0){
          ans[j]=ans[j+1];
          continue;}

      else {
          if(j==n){
              m1[a[j-1]]++;
              continue;
          }
          ans[j]=ans[j+1]+1;
          m1[a[j-1]]++;

      }


   }
   for(ll k=0;k<m;k++){
       ll x;
       cin>>x;
       cout<<ans[x]<<endl;
   }
   
  
    
   
}