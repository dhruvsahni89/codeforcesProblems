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
        string s;
        cin>>s;
        ll n=s.length();
        ll c=0;
        f(i,n){
          if(s[i]=='1') continue;
  if(i<n-2 and s[i]==s[i+1] and s[i]==s[i+2] )c+=2,i+=2;
  else if(s[i]==s[i+1])s[i+1]='1',c++;   
  else if(i<n-2 and s[i]==s[i+2]) s[i+2]='1',c++;
}
cout<<c<<endl;
        
    }
  
}