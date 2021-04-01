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
 f(i,n)cin>>a[i];
 sort(a,a+n);
 ll cnteven=0,cntodd=0,cntdiff=0;
 f(i,n){
     if(a[i]%2==0)cnteven++;
     else cntodd++;
 }
 for(ll i=1;i<n;i++){
     if(a[i]-a[i-1]==1){cntdiff++;
     i++;
     }

 }
 if( cnteven%2==0 ||  cnteven%2!=0 and cntdiff>=1){
     cout<<"YES"<<endl;
 }
//  else if(cnteven%2==0 and cntodd%2!=0 || cnteven%2!=0 and cntodd%2==0 )cout<<"NO"<<endl;
 else {
    //  if(cnteven%2==0)cout<<"YES"<<endl;
    //  else {
    //      if(cntdiff%2!=0)cout<<"YES"<<endl;
    //      else cout<<"NO"<<endl;
    //  }
    cout<<"NO"<<endl;
 }

 


  }
  
 
}