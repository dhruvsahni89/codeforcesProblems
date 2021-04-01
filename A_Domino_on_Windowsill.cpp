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
    
ll n,k1,k2;
cin>>n>>k1>>k2;
ll x,y;
cin>>x>>y;
if(x<=min(k1,k2)+(max(k1,k2)-min(k1,k2))/2 and y<=min(n-k1,n-k2)+(max(n-k1,n-k2)-min(n-k1,n-k2))/2)cout<<"YES"<<endl;
else cout<<"NO"<<endl;

 }

  
 
}