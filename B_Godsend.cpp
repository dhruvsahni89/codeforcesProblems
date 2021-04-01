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
  ll n;
  ll a[n];
  ll prefix[n];
  ll sum=0;
  f(i,n){
      cin>>a[i];
      sum+=a[i];
  }
  prefix[0]=sum;
  ll j=n-1;
  for(ll i=1;i<n;i++){
      prefix[i]=prefix[i-1]-a[j];
      j++;

  }
  if(sum%2!=0){
      cout<<"First"<<endl;
  }
  else {
      ll ans=0;
      f(i,n){
          if(prefix[i]%2!=0)ans=1;
      }
      if(ans==0)cout<<"Second"<<endl;
  }
 
  
}
