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
       ll n,k;
       cin>>n>>k;
       vector<pair<int,int>> v;
       for(int i=0;i<n;i++){
           int x,y;
           cin>>x>>y;
           v.pb(mp(x,y));
       }
       ll ans;
       ll ans2=0;

       for(int i=0;i<n;i++){
           ans=0;
           for(int j=0;j<n;j++){
               ll x1=abs(v[i].first-v[j].first);
               ll y1=abs(v[i].second-v[j].second);
               if((x1+y1)<=k){
                  ans++;
               }


               
              
           }
            if(ans==n){
                ans2=1;
              
            }
       }
       
       if(ans2!=1)
       cout<<"-1"<<endl;
       else cout<<"1"<<endl;
      
    }
}