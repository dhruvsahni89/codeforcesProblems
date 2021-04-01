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
ll n,t,c;
cin>>n>>t>>c;
ll a[n];
f(i,n)cin>>a[i];
ll ans=0;
ll cnt=0;
vl v;
ll zero=0;
v.pb(0);
f(i,n){
    if(a[i]>t){
        v.pb(i+1);
    }
}
v.pb(n+1);
for(ll i=1;i<v.size();i++){
    ll x=v[i]-v[i-1]-1;
  
    ans+=max(x-c+1,zero);

}

cout<<ans<<endl;

 
}