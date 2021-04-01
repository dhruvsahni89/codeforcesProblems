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
ll a[n+1];
for(ll i=1;i<=n;i++)cin>>a[i];
ll ans[n+1];
for(ll i=1;i<=n;i++)ans[i]=0;
ll cnt=a[n];
for(ll i=n;i>0;i--){
     if(a[i]>cnt)cnt=a[i];
    if(cnt>0){
        cnt--;
        ans[i]=1;
        
       
    }
  

}
f(i,n)cout<<ans[i+1]<<" ";
cout<<endl;



  }
  
 
}