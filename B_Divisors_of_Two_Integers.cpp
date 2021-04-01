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
  map<ll,ll>m;
  multiset<ll>ms;
  f(i,n){
      cin>>a[i];
      ms.insert(a[i]);
      m[a[i]]++;
  }
  sort(a,a+n);
 ll x=a[n-1];

 for(ll j=1;j<=sqrt(x);j++){
     if(x%j==0){m[j]--;
     if(x/j!=j)m[x/j]--;
     }
 }
 ll mx=INT_MIN;
 for(ll k=0;k<n;k++){
     if(m[a[k]])mx=max(mx,a[k]);

 }
 cout<<x<<" "<<mx<<endl;

}
