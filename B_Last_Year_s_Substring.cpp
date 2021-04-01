#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
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
    while(t--)
    {
       ll n;
       cin>>n;
      string s;
      cin>>s;
      if(s[0]=='2' && s[n-1]=='0' && s[n-2]=='2' && s[n-3]=='0')
      cout<<"YES"<<endl;
      else if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0')
      cout<<"YES"<<endl;
      else if(s[0]=='2' && s[1]=='0' && s[n-1]=='0' && s[n-2]=='2')
      cout<<"YES"<<endl;
      else if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[n-1]=='0')
      cout<<"YES"<<endl;
      else if(s[n-1]=='0' && s[n-2]=='2' && s[n-3]=='0' && s[n-4]=='2')
      cout<<"YES"<<endl;

      else cout<<"NO"<<endl;

     
      
    }
}