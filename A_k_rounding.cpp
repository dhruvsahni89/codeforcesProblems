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
 ll y=1;
 f(i,k)y=y*10;
 ll x=__gcd(n,y);
 cout<<(n*y)/x<<endl;

 
}