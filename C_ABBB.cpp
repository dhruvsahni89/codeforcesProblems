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


int main()
{
    fastIO
    ll t;cin>>t;
    while(t--){
       string s;
       cin>>s;
       ll cnt=0;
       ll n=s.length();
       ll ans=n;
       f(i,n){
           if(s[i]=='B' and cnt>0)cnt--;
           else cnt++;

          
         
       }
      cout<<cnt<<endl;
    }
   
}