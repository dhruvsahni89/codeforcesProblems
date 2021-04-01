#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios::sync_with_stdio(false);cin.tie(NULL);
#define f(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define pl pair<ll, ll>
#define vl vector<ll>
#define mod 1000000007
#define N 100005

// void SieveOfEratosthenes(ll n)
// {
    
//     bool prime[n + 1];
//     memset(prime, true, sizeof(prime));
 
//     for (ll p = 2; p * p <= n; p++)
//     {
        
//         if (prime[p] == true) 
//         {
           
//             for (ll i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }
 
  
//     for (ll p = 2; p <= n; p++)
//         if (prime[p])
//             cout << p << " ";
// }

  
ll nCr(ll n) 
{ 
    return n*(n-1)/2;
} 


int main()
{
    fastIO
    ll t;cin>>t;
    while(t--){
     ll a,b,k;
     cin>>a>>b>>k;
     ll x[k],y[k];
     map<int,int>m;
     map<int,int>d;
     f(i,k){

         cin>>x[i];
         m[x[i]]++;
     }
         f(i,k){

         cin>>y[i];
         d[y[i]]++;
     }
     ll mx= INT_MIN;
     
    
     ll ans=0;
     ll sum=0;
     ll sum2=0;
     for(ll i=0;i<=a;i++){
         if(m[i]>=2)
         {
             sum+=nCr(m[i]);
         }
     }
     f(i,b+1){
         if(d[i]>=2)
         {
             sum2+=nCr(d[i]);
         }
     }
    
     
     ans+=nCr(k)-sum-sum2;
     cout<<ans<<endl;
     


        
        


    }
   
}