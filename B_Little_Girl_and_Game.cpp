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
  string s;
  cin>>s;
  map<int,int>m;
  ll n=s.size();
  
  ll x=0;
  f(i,n){
     m[s[i]-'a']++;

  }
  for(auto g:m){
      if(g.second%2==1)
      x++;
  }
  if(x==1 || x==0){
      cout<<"First"<<endl;

  }
  else {
  if(x%2==0){
      cout<<"Second"<<endl;
  }
  else cout<<"First"<<endl;
  }
   
}