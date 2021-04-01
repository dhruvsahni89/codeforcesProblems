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
      map<ll,ll>m;
     cin>>n;
     ll a[n];
     f(i,n){
         cin>>a[i];
         
     }
     ll c=0;
     f(i,n){
         if(m[a[i]]==0){
             m[a[i]]++;
         c++;
         }
         else if(m[a[i]+1]==0){
             c++;
             m[a[i]+1]++;
         }


     }
    cout<<c<<endl;
     
       

    }
}