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
#define N 1000005
#define M 1000000007

 ll sign(ll n){
     if(n<0)return 1;
     else return -1;
 }
int main()
{
    fastIO
  ll t;cin>>t;
  while(t--){
      ll n,k;
      cin>>n>>k;
      if(n<k)cout<<"NO"<<endl;
     else if(n==k ){
          cout<<"YES"<<endl;
          f(i,n)cout<<1<<" ";
          cout<<endl;
      }
      else if(n%2==0 and k>n/2){
          if(k%2!=0)
          cout<<"NO"<<endl;
          else {
              cout<<"YES"<<endl;
              f(i,k-1)cout<<1<<" ";
              cout<<n-k+1<<endl;
          }
      }
      else if(n%2==0 and k<=n/2){
          cout<<"YES"<<endl;
         ll x=n/2;
         f(i,k-1)cout<<2<<" ";
         ll g=n-2*(k-1);
         cout<<g;
         cout<<endl;
      }
      else if(n%2!=0 and k%2==0)cout<<"NO"<<endl;
      else if(n%2!=0 and k%2!=0){
          cout<<"YES"<<endl;
          f(i,k-1)cout<<1<<" ";
          ll g=n-k+1;
          cout<<g<<endl;
      }
  }
}
