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
    ll t; cin>>t;
    while(t--)
    {
     ll n,x;
     
     cin>>n>>x;
     ll a[n];
     ll min=0;
     ll max=0;
     f(i,n){
         cin>>a[i];
         min+=a[i];

     }
     f(j,n){
         
         if(a[j]%x==0){
             max+=a[j]/x;
         }
         else {
             max+=(a[j]/x)+1;
         }
     }
     ll ans;
     if(min%x==0){
          ans=min/x;
     }
     else {
         ans=(min/x)+1;
     }
     cout<<ans<<" "<<max<<endl;
     
    

    }
}