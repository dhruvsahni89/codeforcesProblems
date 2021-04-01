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
ll n,k;
cin>>n>>k;
vl v;
f(i,n){
    string s;
    cin>>s;
    v.pb(s.size());
  

}
string ans;
cin>>ans;
ll x=(n-1)/k;
  ll worstcase=(x)*(5+k)+(n-(x*k));

  sort(v.begin(),v.end());
  ll needsize=ans.size();
  ll cnt=0,cnt2=0;
  f(i,v.size()){
      if(v[i]<needsize){
       cnt++;
       cnt2++;
      }
      if(v[i]==needsize)cnt2++;
    
     
  }
 
cout<<cnt +1 +(cnt/k)*5<<" "<<cnt2 +5*((cnt2-1)/k)<<endl;

  
}
