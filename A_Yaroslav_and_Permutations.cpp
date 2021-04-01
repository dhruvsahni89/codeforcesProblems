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
 ll t=1;
 
 while(t--){
     ll n;
     cin>>n;
     map<int,int>m;
     ll a[n];
     f(i,n){cin>>a[i];
     m[a[i]]++;

     }
     ll ans=1;

     for(auto x:m){
         if(x.second>(n+1)/2){
             ans=0;
             break;
         }

     }
     if(ans)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;

    
     
 }
   
}