#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,n) for(int i=0;i<n;i++)
#define endl ("\n")
#define pb push_back
#define mp make_pair
#define pl pair<ll, ll>
#define vl vector<ll>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define N 100005
#define M 1000000007

int main()
{
    fastIO

 ll t;
 cin>>t;
 while(t--){
     ll n;
     map<ll,ll>m;
     cin>>n;
     ll a[n];
     f(i,n){cin>>a[i];
     m[a[i]%3]++;
     }
     ll ans=m[0];
     ll mn=min(m[1],m[2]);
     ans+=mn;
     m[1]=m[1]-mn;
     m[2]=m[2]-mn;
     ans+=(m[1]+m[2])/3;
     cout<<ans<<endl;
     
 }
 
}