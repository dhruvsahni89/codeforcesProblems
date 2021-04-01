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
  ll n,m;
  cin>>n;
  ll a[n];
 
  map<ll,ll>mp;
  f(i,n){
      cin>>a[i];
  }
  cin>>m;
   ll b[m];
  f(j,m){
      cin>>b[j];
      mp[b[j]]++;
  }
  sort(a,a+n);
ll cnt=0;
  f(i,n){
         if(mp[a[i]-1]){
          mp[a[i]-1]--;
          cnt++;
          
        
      }
     else if(mp[a[i]]){
          cnt++;
          mp[a[i]]--;


      }
    
      else if(mp[a[i]+1]){
          mp[a[i]+1]--;
          cnt++;
      }
  }
  cout<<cnt<<endl;

}
