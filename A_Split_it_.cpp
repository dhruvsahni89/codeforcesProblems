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

 ll t;cin>>t;
 while(t--){
    
  
 ll n,k;
 cin>>n>>k;
 string s;
 cin>>s;
 if((2*k)+1>n)cout<<"NO"<<endl;
 else {
     string a="";
     string b="";
     f(i,k){
         a.pb(s[i]);
     }
     for(ll i=n-1;i>=n-k;i--){
         b.pb(s[i]);
     }
     if(a==b)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    
 }
 


  }
  
 
}