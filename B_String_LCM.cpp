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
 ll t;
 cin>>t;
 while(t--){
    string s,t;
    cin>>s>>t;
    ll x=s.length();
    ll y=t.length();
    ll g=1;

    ll lcm=(x*y)/__gcd(x,y);

    string z="";
    for(ll i=0;i<lcm/x;i++){
        z+=s;
    }
    for(ll j=0;j<z.length();j+=y){
        string ans="";
        for(ll k=j;k<j+y;k++){
            ans+=z[k];


        }
        if(ans!=t){
            g=0;
            break;
        }
    }
     if(g)
     cout<<z<<endl;
     else cout<<-1<<endl;

 }
   
}