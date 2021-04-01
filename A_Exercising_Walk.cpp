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
    ll a,b,c,d,x,y,x1,x2,y1,y2;
    cin>>a>>b>>c>>d;
    cin>>x>>y>>x1>>y1>>x2>>y2;
    ll l=abs(x1-x);
    ll r=abs(x2-x);
    ll u=abs(y2-y);
    ll down=abs(y1-y);
    if(l>=a and r>=b and u>=d and down>=c)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 }
}