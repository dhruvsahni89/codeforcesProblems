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
    ll t=1;
    while(t--){
        ll n,a[3];
        cin>>n;
        f(i,3)cin>>a[i];
        sort(a,a+3);
        ll mx=INT_MIN;
        ll x=n/a[0];
        for(ll i=0;i<=x;i++){
            ll y=a[0]*i;
            for(ll j=0;j<=x;j++){
                ll z=a[1]*j;
                if(n>=(y+z) and (n-(y+z))%a[2]==0){
                    ll ans=i+j+(n-(y+z))/a[2];
                    mx=max(mx,ans);

                }


            }
        }
        cout<<mx<<endl;

       
    }
   
}