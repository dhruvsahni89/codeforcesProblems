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
     string s;
     string s2 = string(n, '1');
     cin>>s;
     s2[0]='1';
     ll x=s[0]-'0'+s2[0]-'0';
     for(ll i=1;i<n;i++){
         if(x==2){
             if(s[i]=='1')s2[i]='0';
             else s2[i]='1';
         }
         else if(x==1){
             if(s[i]=='0')
             s2[i]='0';
             else s2[i]='1';
         }
         else 
         {s2[i]='1';
         }

         x=s[i]-'0'+s2[i]-'0';


     }
     cout<<s2<<endl;
     
     
     
 }
   
}
