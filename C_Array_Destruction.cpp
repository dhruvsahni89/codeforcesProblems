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
 
 while(t--){
     ll n;
     cin>>n;
     int d=1;
    ll a[2*n];
    ll mx=-1,idx;

    f(i,2*n){cin>>a[i];
   if(a[i]>mx){
       mx=a[i];
       idx=i;
   }
    }
    for(ll i=0;i<2*n;i++){
        if(i==idx)continue;

        vector<pair<int,int>>v;
        multiset<int>ms;
        for(ll k=0;k<2*n;k++)ms.insert(a[k]);
        int x=mx+a[i],f=1;
        while(!ms.empty()){
            int m=*ms.rbegin();
            ms.erase(ms.find(m));
            if(ms.find(x-m)==ms.end()){
                f=0;
                break;
            }
            ms.erase(ms.find(x-m));
            pair<int,int>p(m,x-m);
            v.pb(p);
            x=m;
        }
        if(f){
            cout<<"YES"<<endl;
            cout<<mx+a[i]<<endl;
            for(auto g:v)cout<<g.first<<" "<<g.second<<endl;

            d=0;
            break;
        }



    }
    if(d)cout<<"NO"<<endl;

     
 }
   
}
