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


 ll countsum(ll n){
     ll ans=0;
     while(n){
         ans+=n%10;
         n/=10;
     }
     return ans;
 }
int main()
{
    fastIO
ll k;
cin>>k;
ll ans=0;
while(k){
    ans++;
    if(countsum(ans)==10)k--;
}

cout<<ans;
 
}