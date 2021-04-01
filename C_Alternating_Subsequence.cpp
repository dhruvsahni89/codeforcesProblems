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
#define N 1000005
#define M 1000000007

 ll sign(ll n){
     if(n<0)return 1;
     else return -1;
 }
int main()
{
    fastIO
  ll t;cin>>t;
  while(t--){
      ll n;
      cin>>n;
      ll a[n];
     
     
   
      f(i,n){
          cin>>a[i];
        
       
      }
      ll ans=0;
      f(i,n){
          ll x=a[i];
          ll j=i;
          while(j<n and sign(a[i])==sign(a[j])){
              x=max(x,a[j]);
              j++;
          }
          ans+=x;
          i=j-1;

      }
     
     cout<<ans<<endl;
  }
}
