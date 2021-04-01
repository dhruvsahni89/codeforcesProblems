#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios::sync_with_stdio(false);cin.tie(NULL);
#define f(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define pl pair<ll, ll>
#define vl vector<ll>
#define mod 1000000007
#define N 100005

void SieveOfEratosthenes(ll n)
{
    
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (ll p = 2; p * p <= n; p++)
    {
        
        if (prime[p] == true) 
        {
           
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
  
    for (ll p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}

int main()
{
    fastIO
    ll t;cin>>t;
    while(t--){
        ll n;
        vl v;
        cin>>n;
        ll mx=0;
        ll a[n];
        f(i,n){
            cin>>a[i];
           
            mx=max(a[i],mx);

        }
        v.pb(mx);
        sort(a,a+n);
        ll g=a[n-1];
        ll mn=INT_MIN;
        a[n-1]=-1;
        for(ll i=0;i<n-1;i++){
            mn=INT_MIN;
            ll k=0;
            for(ll j=0;j<n-1;j++){
                if(a[j]!=-1){
                  if(__gcd(g,a[j])>=mn){
                      mn=__gcd(g,a[j]);
                      k=j;
                  }
                }

            }
            v.pb(a[k]);
            g=__gcd(g,a[k]);
            a[k]=-1;

        }
        for(auto x:v)cout<<x<<" ";
        cout<<endl;

       

    
    }
   
}