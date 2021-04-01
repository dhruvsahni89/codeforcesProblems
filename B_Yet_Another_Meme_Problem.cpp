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
    
  
  ll a,b;
  cin>>a>>b;
  ll cnt=0;
  ll x=9;
 while(x<=b){
   x=x*10 +9;
     cnt++;
 }
 cout<<(cnt)*a<<endl;
     


  }
  
 
}