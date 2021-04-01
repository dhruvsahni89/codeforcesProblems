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
     ll n,k;
     vl v;
         ll sum=0;
     cin>>n>>k;
     ll a[n];
     set<int>s;
     f(i,n){cin>>a[i];
     s.insert(a[i]);
     }

     if(s.size()>k){
         cout<<"-1"<<endl;
         
     }
     else {
     cout<<n*k<<endl;
     for(ll i=0;i<n;i++){
         for(auto x:s){
             cout<<x<<" ";
         }
         for(ll j=0;j<k-s.size();j++){
             cout<<1<<" ";
         }
     }
     cout<<endl;
     }

     

     

    }

}