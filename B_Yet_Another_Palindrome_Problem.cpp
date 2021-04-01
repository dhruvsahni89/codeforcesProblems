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
    ll n;
    cin>>n;
    ll ans=0;
    ll a[n];
    f(i,n)cin>>a[i];
    f(i,n){
        for(ll j=i;j<n;j++){
            if(a[j]==a[i] and j>i+1){
                ans=1;
            }
        }
    }
    if(ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 }
}