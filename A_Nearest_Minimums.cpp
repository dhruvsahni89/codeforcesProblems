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
ll n;
cin>>n;
ll a[n];
ll mn=INT_MAX;
f(i,n)cin>>a[i],mn=min(a[i],mn);
vl v;
for(ll i=0;i<n;i++){
    if(a[i]==mn)v.pb(i);
   
}
ll ans=v[1]-v[0];
for(ll i=0;i<v.size()-1;i++){
    ans=min(v[i+1]-v[i],ans);

}
cout<<ans<<endl;

  
}
