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
  ll n,m;
  cin>>n;
  ll a[n+1];
  for(ll i=1;i<=n;i++){
      cin>>a[i];
  }

 cin>>m;
 ll prefix[n+1];
 prefix[0]=0;

 for(ll j=1;j<=n;j++){
     prefix[j]=prefix[j-1]+a[j];
     idx[prefix[j]]=j;
 }

 multiset<ll>ms;
 f(j,n+1){
     ms.insert(prefix[j]);
 }
    ll value;
 f(k,m){
     ll q;
     cin>>q;
     auto it=ms.lower_bound(q);
//      if(it==ms.end()){
// value=prefix[n];
//      }
//      else
      value=*it;
    //  ll l=0;
    //  ll h=n+1;
    //  ll mid=(l+h)/2;
    //  ll ans;
    //  while(l<h){
    //      mid=(l+h)/2;
    //      if(value>prefix[mid]){
    //          l=mid+1;
    //      }
    //      else if(value<prefix[mid]){
    //          h=mid-1;
    //      }
    //      else {
    //          ans=mid;
    //          break;
             
    //      }
    //  }
     cout<<idx[value]<<endl;
 }
 
}
