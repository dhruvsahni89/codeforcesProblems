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
ll a[n+1];
map<ll,ll>m;
map<ll,ll>d;
for(ll i=1;i<=n;i++){
    cin>>a[i];
    if(m[a[i]]){
        m[a[i]]=max(i,m[a[i]]);
    }
    
}
ll dj,hj;
ll f=a[n];
ll s=a[1];
for(ll j=1;j<=n;j++){
    if(a[j]!=f){
         dj=j;
        break;
    }
}
for(ll j=n;j>=1;j--){
    if(a[j]!=s){
         hj=j;
        break;
    }
}
cout<<max((hj-1),(n-dj))<<endl;
// ll mn=INT_MAX;
// ll mx=INT_MIN;
// for(auto x:m){


//     mx=max(mx,x.second);
//     mn=min(mn,x.second);

// }
// cout<<mx-mn<<endl;


  
}
