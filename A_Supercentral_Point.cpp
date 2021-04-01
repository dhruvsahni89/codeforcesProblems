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
   
   ll n;
   cin>>n;
   vector<pair<int,int>>v(n);
   f(i,n){
       
       cin>>v[i].first>>v[i].second;
      
   }
   ll cnt,cnt1,cnt2,cnt3;
   ll ans=0;

   f(i,n){
        cnt=0,cnt1=0,cnt2=0,cnt3=0;
       f(j,n){
           if(v[j].first==v[i].first && v[j].second>v[i].second)cnt=1;
           if(v[j].first==v[i].first && v[j].second<v[i].second)cnt1=2;
           if(v[j].second==v[i].second && v[j].first>v[i].first)cnt2=3;
            if(v[j].second==v[i].second && v[j].first<v[i].first)cnt3=4;



       }
       if(cnt+cnt1+cnt2+cnt3==10){
       ans++;
       }

       
   }

//    f(i,n){
//        cout<<v[i].first<<" "<<v[i].second;
//    }
   cout<<ans<<endl;
}