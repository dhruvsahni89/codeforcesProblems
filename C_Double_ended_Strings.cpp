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

int main()
{
    fastIO
    ll t;cin>>t;
    while(t--){
       string a,b;
       ll cnt=0;
       ll mx=0;
       cin>>a;
       cin>>b;
       ll n=a.length();
       ll m=b.length();
      f(i,n){
          
        
          for(ll j=0;j<m;j++){
              cnt=0;
              if(a[i]==b[j]){
        
          ll x=i;
          ll d=j;
          while(b[d]==a[x] and d<m and x<n){
              cnt++;
              d++;
              x++;

          }
         
          }
           mx=max(mx,cnt);
          }
      }
      ll ans=n-mx+m-mx;
      cout<<ans<<endl;
    }
   
}
