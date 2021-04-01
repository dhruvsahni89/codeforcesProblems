// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define f(i,n) for(int i=0;i<n;i++)
// #define endl ("\n")
// #define pb push_back
// #define mp make_pair
// #define pl pair<ll, ll>
// #define vl vector<ll>
// #define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define N 100005
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

// int main()
// {
//     fastIO
//     ll t;cin>>t;
//     while(t--){
//       ll A,B,n;
//       cin>>A>>B>>n;
//       ll a[n],b[n];
//       f(i,n)cin>>a[i];
//       f(j,n)cin>>b[j];
//       ll ans=B;
//       ll x;

// ll g=1;
//       for(ll i=0;i<n;i++){
//           if(b[i]>A){
         
//            x=(b[i]/A) +(b[i]%A!=0);
//           }
//           else {
//               x=1;
//           }
           
//           if(x*a[i]>ans ){
//               g=0;
              

//           }
//         //   if(i==n-1 and x*a[i]==ans){
//         //       g=1;
              
              
//         //   }
//         //   if(x*a[i]>ans and i==n-1){
//         //       g=0;
//         //   }
//            ans-=x*a[i];
         
//         //   if(ans==0 and i==n-1)g=1;
          
          
//         //       if(ans<=0 )g=0;
             
            
          
//       }
    
      
//       if(g==1)cout<<"YES"<<endl;
//       else cout<<"NO"<<endl;
      
//     }
   
// }
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
      ll A,B,n;
      cin>>A>>B>>n;
      ll a[n],b[n];
      vector<pair<ll,ll>>v;
      f(i,n){
        cin>>a[i];
          }

      f(j,n){
          cin>>b[j];
         }
         for(ll k=0;k<n;k++){
             v.pb(mp(a[k],b[k]));
         }

      ll ans=B;
      ll x;
      sort(v.begin(),v.end());

ll g=1;
      for(ll i=0;i<n;i++){
         
         if(ans>0){
          while(v[i].second>0){
                ans-=v[i].first;
               v[i].second=v[i].second-A;
            
             
              if(ans<=0)break;
              
             
              

         
          }
         }
          if(v[i].second>0 ){
              g=0;
              
          }
         
          
           
            
          
      }
      
      if(g==1)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
      
    }
   
}