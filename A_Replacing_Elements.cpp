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
 ll t;
 cin>>t;
 while(t--){
     ll n,d;
     cin>>n>>d;
     ll a[n];
     ll x=1;
     f(i,n){
         cin>>a[i];
         if(a[i]>d){
             x=0;
         }
     }

     sort(a,a+n);
     ll sum=a[0]+a[1];

     if(x){
         cout<<"YES"<<endl;
     }
     else {
         if(sum<=d)
         cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
     }
 }
   
}