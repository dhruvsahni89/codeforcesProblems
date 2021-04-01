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

int main(){
    fastIO

    ll n,k;
    cin>>n>>k;
    ll a[n+1];
    ll f=1;
    for(ll i=1;i<=n;i++)cin>>a[i];

    for(ll j=k;j<=n;j++){
        if(a[j]!=a[k]){
            f=0;
            break;
        }
    }
    ll ans=0;

    if(f){
        for(ll j=k;j>=1;j--){
            if(a[j]!=a[k]){
            ans=j;
            break;
            }
        }

        cout<<ans<<endl;
    }
    else cout<<-1<<endl;

}