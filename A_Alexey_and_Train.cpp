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
vector<pair<int,int>>v(n);
ll ans=0;
ll t[n];
f(i,n){
    cin>>v[i].first>>v[i].second;
   
}
f(i,n)cin>>t[i];
ans+=t[0]+v[0].first;
f(i,n){
    if(i!=n-1){
        ans+=(v[i].second-v[i].first+1)/2;
        while(ans<v[i].second){
            ans++;
        }
    }
    if(i<n-1 ){
        ans+=v[i+1].first-v[i].second+t[i+1];
    }

}
cout<<ans<<endl;



  }
  
 
}