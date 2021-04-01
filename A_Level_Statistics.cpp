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
  ll t;cin>>t;
  while(t--){
      ll m[1001];
      f(i,1001)m[i]=-1;
    ll n;
    cin>>n;
    ll a[n],b[n];
    f(i,n){
        cin>>a[i];
        cin>>b[i];
    }
    ll g=1;
   ll c=0;
   ll p=0;
    f(i,n){
       {
           if (a[i] < p || b[i] < c || (b[i] - c) >(a[i] - p))g=0;
           p=a[i];
           c=b[i];
       }
    }
    if(g)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
     
  }
}
