#include <bits/stdc++.h>
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
 ll a,b,c;
 cin>>a>>b>>c;
 ll x=b-a;
 if(a!=b and c==0)cout<<"NO"<<endl;
 else if(a==b )cout<<"YES"<<endl;
 else if(x%c!=0)cout<<"NO"<<endl;
 else if(x%c==0 and (x/c)+1>=1)cout<<"YES"<<endl;
 else cout<<"NO"<<endl;

}
