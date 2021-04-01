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
ll n;
cin>>n;
ll a[n];
f(i,n)cin>>a[i];
ll b[n];
ll mx=a[n-1];
for(ll i=n-1;i>=0;i--){
    if(i==n-1)b[i]=0;
    else {
    if(a[i]>mx){
        b[i]=0;
        mx=a[i];
    }
   else if(a[i]<mx){
        b[i]=mx-a[i]+1;
    }
   else  if(a[i]==mx){
        b[i]=1;
    }
    }
    
}
f(j,n)cout<<b[j]<<" ";

}
