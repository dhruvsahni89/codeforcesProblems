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


int main()
{
   fastIO
   ll t; cin>>t;
   while(t--)
   {
      ll n, m, j = 1, ans = 0; cin>>n>>m;
      ll a[n], c[m+1];
      for(ll i = 0; i < n; i++) cin>>a[i];
      for(ll i = 1; i <= m; i++) cin>>c[i];
      sort(a, a+n);
   
      for(ll i = n-1; i >= 0; i--)
      {
          if(c[a[i]] <= c[j]) ans += c[a[i]];
          else ans += c[j], j += 1;
          
      }
      cout<<ans<<"\n";
   }
}
