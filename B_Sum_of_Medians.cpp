#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define f(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define pl pair<ll, ll>
#define vl vector<ll>
#define mod 1000000007
#define N 100005

int main()
{
    fastIO
    ll t; cin>>t;
    while(t--){
       ll n,k;
       cin>>n>>k;
       ll a[n*k +1];
       a[0]=0;
      for(ll i=1;i<=n*k;i++){
          cin>>a[i];
      }
       ll g=(n+1)/2;
       ll j=n-g+1,cnt=0,sum=0;
    
       for(ll h=n*k-j+1;h>0;h-=j){
           sum+=a[h];
           cnt++;
           if(cnt==k)
           break;
       }
       cout<<sum<<endl;
    }
  
}