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
int main(){
    fastIO
  ll n;
  cin>>n;
  ll a[2*n];
  f(i,2*n)cin>>a[i];
  sort(a,a+2*n);
  ll sum=0,sum2=0;
  f(i,n)sum+=a[i];
  for(ll j=n;j<2*n;j++)sum2+=a[j];



  if(sum==sum2)
  {
      cout<<-1<<endl;
  }
  else {f(i,n)cout<<a[i]<<" ";
  for(ll j=n;j<2*n;j++)cout<<a[j]<<" ";
  cout<<endl;
  }




}