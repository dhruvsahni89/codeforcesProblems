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
    ll t;cin>>t;
    while(t--){
     ll n,m;
     cin>>n>>m;
     ll g=1;
     ll a[n+1][m+1];
     for(ll i=1;i<=n;i++){
         for(ll j=1;j<=m;j++){
             cin>>a[i][j];
             if(a[i][j]>4)g=0;
             if(a[i][j]>2 and (i==1 and j==1 || i==n and j==m || i==1 and j==m || i==n and j==1))g=0;
             if(a[i][j]>3 and (i==1 || i==n || j==1 || j==m))g=0;

         }
     }
     if(g){cout<<"YES"<<endl;
      for(ll i=1;i<=n;i++){
         for(ll j=1;j<=m;j++){
             if(i==1 and j==1 || i==n and j==m || i==1 and j==m || i==n and j==1)cout<<2<<" ";
             else if(i==1 || i==n || j==1 || j==m)cout<<3<<" ";
             else cout<<4<<" ";
         }
         cout<<endl;
      }

     }
     else cout<<"NO"<<endl;
		
    }
   
}