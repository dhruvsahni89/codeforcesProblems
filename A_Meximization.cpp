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
    
ll n;
cin>>n;
ll a[n];
map<ll,ll>m;
set<ll>s;
f(i,n){
    cin>>a[i];
    m[a[i]]++;
    s.insert(a[i]);
}
for(auto x:s)cout<<x<<" ";
for(ll d=0;d<m.size();d++){
    if(m[d]>1){
        for(ll j=0;j<m[d]-1;j++)cout<<d<<" ";
    }
}
cout<<endl;

  }
  
 
}