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
        ll n,m,sx,sy;
        cin>>n>>m>>sx>>sy;
        cout<<sx<<" "<<sy<<endl;
        ll a[n+1][m+1];
        f(i,n){
            f(j,m)a[i][j]=0;
        }
        a[sx][sy]=1;
        for(ll j=sx-1;j>0;j--){
            cout<<j<<" "<<sy;
            cout<<endl;
        }
        for(ll m=sx+1;m<=n;m++){
            cout<<m<<" "<<sy<<endl;
        }
        ll j=1;

        for(ll k=1;k<=n;k++){
            for(ll d=1;d<=n;d++){
                if( d==sy)continue;
                cout<<k<<" "<<d<<endl;
            }
        }
        
      
      

    }
   
}