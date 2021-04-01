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
 ll t;cin>>t;
 while(t--){
     ll n;
     cin>>n;
     ll a[n];
     f(i,n)cin>>a[i];
     ll ans=n-1;
     while(ans>0 and a[ans-1]>=a[ans])ans--;
      while(ans>0 and a[ans-1]<=a[ans])ans--;
      cout<<ans<<endl;

}

  
 
}
