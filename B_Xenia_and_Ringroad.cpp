#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define f(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define pl pair<ll, ll>
#define vl vector<ll>
#define mod 1000000007
#define N 100005

int main()
{
    fastIO
   
   ll n,m;
   cin>>n>>m;
   ll a[m];
   f(i,m)cin>>a[i];

   ll ans=a[0]-1;
   ll k=a[0];
   for(ll i=1;i<m;i++){
       if(a[i]<k){
           ans+=n-k+a[i];
           k=a[i];
       }
       else if(a[i]>k){
           ans+=a[i]-k;
           k=a[i];
       }
   }
   cout<<ans<<endl;
  
}