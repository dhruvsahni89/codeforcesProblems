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
    while(t--)
    {
     
       ll n;
       cin>>n;
       int mx=INT_MIN;
       int mn=INT_MIN;
       int sum=0;
       int  sum1=0;
       ll a[n];
       f(i,n){
           cin>>a[i];
           sum+=a[i];
           mx=max(sum,mx);
       }
       ll m;
       cin>>m;
       ll b[m];
       for(int j=0;j<m;j++){
           cin>>b[j];
           sum1+=b[j];
           mn=max(sum1,mn);
       }
       
     int x=max(mn+mx,0);
    x=max(x,mn);
    x=max(x,mx);
     cout<<x<<endl;
     


       

    }
}