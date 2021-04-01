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
#define M 1000000007


int main()
{
    fastIO
  ll n,m;
  cin>>n>>m;
  ll a[n];
  ll mx=INT_MIN;
  ll mn=INT_MAX;
  f(i,n){
      cin>>a[i];
      mx=max(mx,a[i]);
      mn=min(mn,a[i]);
  }
f(i,m){
    ll idx=-1;
    f(j,n){
        if(idx==-1 || a[j]<a[idx]){
            idx=j;
        }
    }
    a[idx]++;
}

  cout<<*max_element(a,a+n)<<" "<<mx+m<<endl;
 
   
}
