#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,n) for(int i=0;i<n;i++)
#define endl ("\n")
#define pb push_back
#define mp make_pair
#define pl pair<ll, ll>
#define vl vector<ll>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define N 100005
#define M 1000000007

ll d[10000];
int main()
{

ll n;
cin>>n;
ll ans=0;
for(ll i=1;i<=n;i++){
    ans+=pow(2,i);
}
cout<<ans<<endl;
}