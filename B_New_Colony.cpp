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
        ll n,k;
        cin>>n>>k;
        ll a[n];
        ll g=1;
        ll ans=-1;
        f(i,n)cin>>a[i];
        ll cnt=0;
        ll s,e;
        while(1){
             g=0;
            for(ll j=0;j<n-1;j++){
                if(a[j]<a[j+1]){
                    g=1;

                }

            }
            if(g==0 || k<=0)break;
           
      for(ll i=0;i<n-1;i++){
          if(a[i]<a[i+1]){
              
            
                k--;
                a[i]++;
                ans=i;
                break;
              
             
              
          }
          
         
      }
        }
     

       
      if(k<=0)cout<<ans+1<<endl;
      else cout<<-1<<endl;
    
    }
   
}