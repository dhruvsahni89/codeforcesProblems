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
  ll k;
  string v;

  cin>>k>>v;
 ll i=0;
  ll sum=0;
  while(i<v.length())
    {
        sum+=(v[i]-'0');
       
        i++;      
    }
 
  if(sum>=k)cout<<0<<endl;
  else {
      sort(v.begin(),v.end());
     
      ll cnt=0;
      ll ans=0;
      i=0;
      while(i<v.size())
      {
          sum-=(v[i]-'0');
          sum+=9;
          cnt++;
          if(sum>=k)
          {
              ans=1;
              break;
          }
          i++;
      }
      cout<<cnt<<endl;
  }
  
  
}
