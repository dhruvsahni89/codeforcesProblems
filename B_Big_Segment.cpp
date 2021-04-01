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

int main(){
    fastIO
    ll n;
    cin>>n;
   ll a[n],b[n],c[n],d[n];
    f(i,n){
      cin>>a[i]>>b[i];
      c[i]=a[i],d[i]=b[i];
    }
   sort(c,c+n);
   sort(d,d+n);
   ll x=c[0];
   ll y=d[n-1];
   ll ans=-1;

   f(i,n){
       if(a[i]==x and b[i]==y){
           ans=i+1;
           break;
       }
   }
   cout<<ans<<endl;


}