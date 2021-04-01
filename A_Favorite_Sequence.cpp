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
      if(n%2){
          for(ll i=0;i<n/2;i++){
              cout<<a[i]<<" "<<a[n-1-i]<<" ";
          }
          cout<<a[n/2]<<endl;
      }
      else {for(ll i=0;i<n/2;i++){
          cout<<a[i]<<" "<<a[n-1-i]<<" ";
      }
      cout<<endl;
      }
     
      
    }
}