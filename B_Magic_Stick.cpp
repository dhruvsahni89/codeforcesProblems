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
ll x,y;
cin>>x>>y;
if(x==y)cout<<"YES"<<endl;
else if((y<4 and (x==2 || x==3)) || (x>3))cout<<"YES"<<endl;

else cout<<"NO"<<endl;
 }

  
 
}