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

 ll idx[N];
int main()
{
    fastIO
 ll n,m,a,b;
 cin>>n>>m>>a>>b;
 ll mn=INT_MAX;
 for(ll i=0;i<=n;i++){
     ll g=a*i;
     ll x=n-i;
     ll f=((x+m-1)/m)*b;
     ll ans=f+g;
    mn=min(mn,ans);
 }
 cout<<mn<<endl;
}