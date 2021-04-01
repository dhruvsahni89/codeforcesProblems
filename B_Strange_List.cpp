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
     ll n,x;
     cin>>n>>x;
     int a[n];
     ll sum=0;
     vl v;
     int mn=INT_MAX;

    ll index;
     map<int,int>m;
     f(i,n){
         ll cnt=1;
         int y;
         cin>>y;
         v.pb(y);
       
         
         while(y%x==0){
             cnt++;
             y=y/x;
             
         }
         a[i]=cnt;
     }
     f(j,n){
         if(a[j]<mn){
         mn=a[j];
         index=j;
         }
     }
     f(i,n){
         if(i<index){
             sum+=(min(mn+1,a[i]))*v[i];
         }
         else {
             sum+=v[i]*mn;
         }
     }
     
     cout<<sum<<endl;
    }
}