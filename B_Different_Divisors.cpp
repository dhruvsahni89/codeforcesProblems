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
#define N 100000

vl v;


void sieve(ll n){
    bool b[N+1];
memset(b,true,sizeof(b));
    for(ll p=2;p<=sqrt(n);p++){
        if(b[p]==true){
            for(ll i=p*p;i<=n;i+=p){
                b[i]=false;
            }
        }

    }
    for(ll j=2;j<=n;j++){
        if(b[j])v.pb(j);
    }
}

int main()
{
    fastIO
 ll t;cin>>t;
  sieve(N);
 
 while(t--){
     ll d;cin>>d;
     ll s=1,ans=1;

   
    f(i,2){
        ll x=lower_bound(v.begin(),v.end(),s+d)-v.begin();
        ans=ans*v[x];
        s=v[x];

    }
    cout<<ans<<endl;
   
     
 }
   
}