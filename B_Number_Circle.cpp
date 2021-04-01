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

 ll t=1;
 while(t--){
     ll n;
     cin>>n;
     ll a[n];
     f(i,n)cin>>a[i];
     sort(a,a+n);
     ll ans=1;
     for(ll i=0;i<n;i++){
         
             if(i==0){
                 if(a[n-1]+a[1]<=a[i])ans=0;
             }
            
             else if(i<n-1){
                 if(a[i-1]+a[i+1]<=a[i])ans=0;
             }
         
     }
    if(n==3 and (a[0]+a[1]<=a[2]))ans=0;
    if(ans==1){
        if(n>3){
            if(a[n-2]+a[n-3]>a[n-1]){
                ans=1;
                swap(a[n-1],a[n-2]);
            }
            else ans=0;
        }

    }
     if(ans==0)cout<<"NO"<<endl;
     else {
         cout<<"YES"<<endl;
         f(i,n)cout<<a[i]<<" ";

     }
     
 }
 
}