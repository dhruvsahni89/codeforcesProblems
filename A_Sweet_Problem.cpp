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
     ll a[3];
     f(i,3)cin>>a[i];
     sort(a,a+3);
     ll ans=a[0];
     
     if(a[1]==a[2]){
         ll x=(a[0]+1)/2;
         ans+=(a[1]-x);
     }
     else {
         ll dif=a[2]-a[1];
         if(ans<=dif)ans+=a[1];
         else if(dif<ans){
            ll ans2=ans-dif;
            if(a[1]>=ans2){
                ans2=(ans2+1)/2;
             a[1]=a[1]-ans2;
             ans+=a[1];
            }


         }
     }
     cout<<ans<<endl;
     
  
 }
}