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
     vl v;
         
     cin>>n;
     ll cnt=pow(2,n);
     ll cnt1=0;
     for(ll i=1;i<n/2;i++){
         cnt+=pow(2,i);
     }
     for(ll j=n/2;j<n;j++){
         cnt1+=pow(2,j);
     }
 
     ll ans=abs(cnt-cnt1);
     cout<<ans<<endl;
    

    }
}