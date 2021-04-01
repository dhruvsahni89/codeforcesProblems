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
 ll t=1;
 
 while(t--){
     ll n,m;
     cin>>n>>m;
     ll a[n],b[m];
     f(i,n)cin>>a[i];
     f(i,m)cin>>b[i];

     sort(a,a+n);
     sort(b,b+m);
     ll ans=1;

     if(max(a[n-1],2*a[0])>=b[0])ans=0;
     if(ans)cout<<max(a[n-1],2*a[0]);
     else cout<<-1<<endl;


     
     
 }
   
}