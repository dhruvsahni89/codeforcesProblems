#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
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
       ll a[n];
       for(ll i=0;i<n;i++){
           cin>>a[i];

       }
       ll ans=0;

       for(ll i=1;i<n;i++){
           ans+=abs(a[i]-a[i-1]);


       }
       ll d=ans;
       d-=abs(a[0]-a[1]);

       for(ll i=1;i<n;i++){
           ll temp;
           temp=ans;
           temp-=abs(a[i]-a[i-1]);
           if(i!=n-1){
               temp-=abs(a[i+1]-a[i]);
               temp+=abs(a[i+1]-a[i-1]);
           }
           d=min(d,temp);
       }
       cout<<d<<endl;
    }
}