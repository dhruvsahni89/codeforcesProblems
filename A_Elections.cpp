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

ll d[105];
int main()
{
    fastIO
ll n,m;
cin>>n>>m;


f(i,m){
    ll mx=-1;
    ll idx=0;
    f(j,n){
        ll x;
        cin>>x;
        if(x>mx){
            mx=x;
            idx=j;
        }

    }
    d[idx]++;
}
ll ans=0;
f(i,n){
    if(d[ans]<d[i])ans=i;
}
cout<<ans+1<<endl;


}
