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

 ll sign(ll n){
     if(n<0)return 1;
     else return -1;
 }
 
int main()
{
    fastIO
  ll n;
  cin>>n;
  ll a[(n/2)+1];
  ll cntodd=0,cnteven=0;
  map<ll,ll>m;
  map<ll,ll>m1;
  vl v;
  for(ll i=1;i<=n/2;i++){
      cin>>a[i];
     
  }
  ll ans=0;
 
  sort(a+1,a+(n/2)+1);
  
 for(ll i=1;i<=n/2;i++){
    ll x=2*i;
    x-=1;;
    ans+=abs(a[i]-x);
 }
 ll ans1=0;
 ll k=0;
  for(ll i=1;i<=n/2;i++){
    ll d=2*i;
   ans1+=abs(a[i]-d);
 }
 cout<<min(ans,ans1)<<endl;
 


  }
  


