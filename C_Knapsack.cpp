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
     ll n,x;
     
     cin>>n>>x;
     pair<int,int>a[200005];
     
     ll f=0;
     vl y;
     for(ll i=1;i<=n;i++){
         cin>>a[i].first;
         a[i].second=i;
         
     }
     ll idx=-1;
     sort(a+1,a+n+1);
     for(ll j=n;j>=1;j--){
     if(a[j].first<=x && a[j].first>=(x+1)/2){
         f=1;
         idx=a[j].second;
     }
     }
     if(f==1){
         cout<<1<<endl;
         cout<<idx<<endl;
         continue;
         
         
         
     }
     
     
      
     ll sum=0;
     vl v;
     for(ll i=n;i>=1;i--){
         if(a[i].first<(x+1)/2){
             sum+=a[i].first;
             v.pb(a[i].second);
         }
          if(sum>=(x+1)/2){
             f=1;
             break;
         }
     }
         if(f==1){
             cout<<v.size()<<endl;
             sort(v.begin(),v.end());
             for(auto g:v){
                 cout<<g<<" ";
             }
             cout<<endl;
         }
         else cout<<-1<<endl;
     
     
     
     
     
     
    }
}