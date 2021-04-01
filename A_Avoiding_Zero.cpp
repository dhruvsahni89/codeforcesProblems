#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define rep(i, n) for(int i=0;i<n;i++)
#define fr(i,x,n) for(int i=x;i<n;i++)
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
       vector<int> v;
       vector<int>v1;
       ll x=0,ans=0,sum=0,sum1=0;
       for(ll i=0;i<n;i++){
           cin>>a[i];
           x=x+a[i];
         

       }
       sort(a,a+n);
       if(x==0){
       cout<<"NO"<<endl;
       }
       else if(x>0){
           cout<<"YES"<<endl;
           for(ll j=n-1;j>=0;j--){
               cout<<a[j]<<" ";
           }
           cout<<endl;
       }
       else {
           cout<<"YES"<<endl;
           for(ll k=0;k<n;k++){
               cout<<a[k]<<" ";
           }
           cout<<endl;
       }
       
        

    }
}