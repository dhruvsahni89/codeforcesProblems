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
  ll a[n];
  ll f=0,g=0;
  f(i,n)cin>>a[i];
  f(i,n){if(a[i]%2!=0){
      f=1;
      
  }
  
      if(a[i]%2==0)g=1;
  

  }
  if(f and g){
      sort(a,a+n);
      f(i,n)cout<<a[i]<<" ";
      cout<<endl;
  }
  else {
      f(i,n)cout<<a[i]<<" ";
      cout<<endl;

  }



}