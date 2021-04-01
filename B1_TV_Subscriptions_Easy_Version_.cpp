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
    ll t;cin>>t; 
    while(t--)
    {
        ll mx=INT_MAX;
        ll idx;
     ll n,k,d;
     
     
     cin>>n>>k>>d;
      ll freq[k+1]={0};
     ll a[n];
     f(i,n)cin>>a[i];

     for(ll j=0;j<=n-d;j++){
        
         ll cnt=0;
         for(ll h=j;h<j+d;h++){
            if(freq[a[h]]==0){
                cnt++;
                freq[a[h]]=1;
            }

         }
        mx=min(mx,cnt);
        for(ll b=1;b<=k;b++){
            freq[b]=0;
        }
     }
     

     cout<<mx<<endl;
    
    }
}