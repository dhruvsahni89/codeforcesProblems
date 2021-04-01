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

int main()
{
    fastIO

 ll t;cin>>t;
 while(t--){
    
  
  ll n,s,k;
  cin>>n>>s>>k;
  vl a;
  ll mn=INT_MAX;

  f(i,k){
      ll x;
      cin>>x;
      a.pb(x);
  
  }
 
 
      
     ll ans=0;
      for(ll i=0;i<=k;i++){
          if(s-i>=1 and find(a.begin(),a.end(),s-i)==a.end()){
              ans=i;
              break;
          }
          if(s+i<=n and find(a.begin(),a.end(),s+i)==a.end()){
              ans=i;
              break;
          }

         
            
          
      }
      cout<<ans<<endl;
     

     
     


  }
  
 
}