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
    ll t;cin>>t;
    while(t--){
        ll n;
        cin>>n;
        map<ll,ll>m;
        ll a[n];
        vl v;
        f(i,n){
            cin>>a[i];
            m[a[i]]++;
        }
        for(auto x:m){
            v.pb(x.second);
        }
       
        sort(v.begin(),v.end());
        ll ans=v[v.size()-1];
       if(n%2==0){
           if(ans<=n/2)cout<<0<<endl;
           else cout<<(2*ans-n)<<endl;
       }
       else {
           if(ans<=n/2)cout<<1<<endl;
           else cout<<2*ans-n<<endl;
       }
   
}
}
