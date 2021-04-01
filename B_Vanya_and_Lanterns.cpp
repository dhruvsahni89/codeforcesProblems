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
  ll n,l;
  cin>>n>>l;
  double a[n];
  f(i,n){
      cin>>a[i];
  }
  sort(a,a+n);
  double ans=a[0];
  for(ll j=1;j<n;j++){
     double f=(a[j]-a[j-1])/2.0;
     ans=max(ans,f);
  }

//   cout<<ans<<endl;
ans=max(ans,l-a[n-1]);
std::cout << std::setprecision(10) << ans<< '\n';

}
