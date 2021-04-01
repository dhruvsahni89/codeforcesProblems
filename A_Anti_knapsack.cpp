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

 ll t;cin>>t;
 while(t--){
   ll n,k;
   cin>>n>>k;
   vl v;
 for(ll i=k+1;i<=n;i++){
     v.pb(i);
 }
 for(ll i=(k+1)/2;i<k;i++){
     v.pb(i); 
 }
 cout<<v.size()<<endl;
 if(v.size()>0){
     for(auto x:v)cout<<x<<" ";
 }
 cout<<endl;
 }
}