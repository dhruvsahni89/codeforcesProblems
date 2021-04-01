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
ll a[n];
map<ll,ll>m;
set<ll>s;
f(i,n){
    cin>>a[i];
    m[a[i]%k]++;

  
  }
  ll cnt=0;
  for(ll i=0;i<m.size();i++){
    // ll d=x.second;
    // ll j=(k-x.first);
    // if(x.first==0){
    //   cnt++;
    //   x.second=0;
    // }
    // else if(j==x.first){
    //   cnt++;
    //  x.second=0;
     
    // }
    
    // else {
    // ll s=m[j];
    // if(d==s and d and s){
    //   cnt++;
    //   m[j]=0;
    //   x.second=0;
    // }
    // if(d>s and d and s){
    //   cnt++;
    //   x.second=d-s-1;
    //   m[j]=0;
    // }
    // if(s>d and d and s){
    //   cnt++;
    //   m[j]=s-d-1;
    //   x.second=0;
    // }
    // }
    if(m[i]){
      ll x=i;
      ll y=k-x;
      
      if(x==y){
        cnt++;
        m[i]=0;
        
      }
      else if(i==0){
        cnt++;
        m[i]=0;
      }
      else {
        if(m[x]==m[y]){
          cnt++;
          m[x]=0;
          m[y]=0;
        }
        else if(m[x]<m[y]){
         
          cnt+=m[y]-m[x];
          m[x]=0;
          m[y]=0;
        }
        else if(m[x]>m[y]){
          cnt+=m[x]-m[y];
          m[x]=0;
          m[y]=0;


        }
      }

    }

  }
  // for(auto g:m){
  //   cnt+=g.second;
  // }
  cout<<cnt<<endl;
 
 }

  
 
}