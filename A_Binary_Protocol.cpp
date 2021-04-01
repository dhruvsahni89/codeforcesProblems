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

 ll t=1;
 while(t--){
ll n;
cin>>n;
string s;
cin>>s;
vl v;
ll cnt=0;
f(i,n){
    
   
    if(i>0 and s[i]=='0' and s[i-1]=='1' and cnt){
        v.pb(cnt);
        cnt=0;
        continue;
    }
     
     cnt++;
     if( i>0 and i<n-1 and s[i]=='0' and s[i+1]=='1' and cnt){
        f(j,cnt)v.pb(0);
        cnt=0;
    }
   

  
    



}
if(s[n-1]!='0')
v.pb(cnt);
else f(j,cnt+1)v.pb(0);
for(auto x:v)cout<<x;
cout<<endl;
 }

  
 
}