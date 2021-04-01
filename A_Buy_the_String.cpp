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
       ll n,c,c1,h,sum1=0,sum0=0;
       cin>>n>>c>>c1>>h;
       string s;
       cin>>s;
       f(i,n){
           
           
           if(s[i]=='1')
           sum1++;
           else sum0++;
       }
       ll ans=(sum0*c)+(sum1*c1);
       if(c1*sum1>c*sum0){
           ans=min((sum1*h) +(n*c),ans);
       }
      else if(c*sum0>c1*sum1){
           ans=min((sum0*h) +(n*c1),ans);
       }
       cout<<ans<<endl;

     
    }
  
}