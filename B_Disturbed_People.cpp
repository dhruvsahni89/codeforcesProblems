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
        ll n;
        cin>>n;
        ll ans=0;
        ll a[n];
        f(i,n)cin>>a[i];
        vl v;
        for(ll i=1;i<n-1;i++){
            if(a[i-1]==1 and a[i+1]==1 and a[i]==0){
              ans++;
            }
        }
        ll i=1;
        ll notneeded=0;
        while(i<=n-4){
    
        if(a[i]==0 && a[i+2]==0 && a[i-1]==1 && a[i+1]==1 && a[i+3]==1)
        {
          notneeded++;
            i+=4;
        }
        else
        i++;
    }
        cout<<ans-notneeded;
    }
   
}