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
     ll n;
     cin>>n;
     ll a[n+1];
     for(ll i=1;i<=n;i++){
         cin>>a[i];
     }
     ll score=a[n];
     for(ll i=n-1;i>=1;i--){
         if((i+a[i])<=n){
             a[i]=max(a[i]+a[a[i]+i],a[i]);
         }
         else a[i]=max(a[i],a[i]);
         
     }
     sort(a+1,a+n+1);
     cout<<a[n]<<endl;

    }
}