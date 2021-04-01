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
  ll n,m;
  cin>>n>>m;
  ll a[n],b[n];
  ll minsum=0;
  ll maxsum=0;
  vl v;
  f(i,n){
      cin>>a[i];
      cin>>b[i];
      minsum+=b[i];
      maxsum+=a[i];
      v.pb(a[i]-b[i]);

  }
  sort(v.begin(),v.end());
  reverse(v.begin(),v.end());
  if(minsum>m){
      cout<<-1<<endl;
  }
  else {
      if(maxsum<=m)cout<<0<<endl;
      else {
          ll cnt=0;
          for(auto x:v){
              cnt++;
              maxsum-=x;
              if(maxsum<=m)break;
          }
          cout<<cnt<<endl;

      }

  }
  
}
