#include <bits/stdc++.h>
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
    ll t=1;
    while(t--){
        ll n;
        cin>>n;
        string s[n];
       f(i,n){
           
           cin>>s[i];
       }
       for(ll i=0;i<n;i++){
           for(ll j=i+1;j<n;j++){
               if(s[j].length()<s[i].length())swap(s[i],s[j]);
           }
       }
       ll ans=1;
       for(ll i=0;i<n-1;i++){
         if(s[i+1].find(s[i])==string::npos){
             cout<<"NO"<<endl;
             return 0;
         }
       }
       cout<<"YES"<<endl;
       for(auto g:s)cout<<g<<endl;
      
}
}
