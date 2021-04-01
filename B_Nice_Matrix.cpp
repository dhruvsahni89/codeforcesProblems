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
    ll t; cin>>t;
    while(t--){
      ll n,m,sum=0;
      cin>>n>>m;
      ll a[n][m];
      ll k=0;
      f(i,n){
          f(j,m){
             
              cin>>a[i][j];
            
          }
      }
      f(i,n){
          f(j,m){
              ll x=abs(a[i][j]-a[i][m-j-1])+abs(a[i][j]-a[n-i-1][j]);
              ll y=abs(a[n-i-1][j]-a[i][j])+ abs(a[n-i-1][j]-a[i][m-j-1]);
              ll z=abs(a[i][m-j-1]-a[i][j])+ abs(a[i][m-j-1]-a[n-i-1][j]);

              if(x<=y and x<=z)sum+=x,a[i][m-j-1]=a[i][j],a[n-i-1][j]=a[i][j];
              else if(y<=x and y<=z)sum+=y,a[i][j]=a[n-1-i][j],a[i][m-j-1]=a[i][j];
              else if(z<=x and z<=y)sum+=z,a[i][j]=a[i][m-j-1],a[n-i-1][j]=a[i][m-j-1];
          }
          
      }
      cout<<sum<<endl;
     
    }
  
}