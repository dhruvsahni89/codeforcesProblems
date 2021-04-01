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
  ll n;
  cin>>n;
  ll a[n];
  f(i,n)cin>>a[i];
  sort(a,a+n);
  ll k=0;
 
  ll mn=a[0];
   f(i,n){
      if(a[i]!=mn)
      k=1;
  }
  ll mx=a[n-1];
  cout<<mx-mn<<" ";
  ll x=0,y=0;
  f(i,n){
      if(a[i]==mn)
      x++;

      if(a[i]==mx)
      y++;
  }
  if(k)
  cout<<x*y<<endl;
  else cout<<n*(n-1)/2<<endl;
}