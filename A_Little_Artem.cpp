
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,n) for(int i=0;i<n;i++)
#define endl ("\n")
#define pb push_back

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
  ll t;
  cin>>t;
  while(t--){
      ll n,m;
      cin>>n>>m;
      string a[n][m];
      
          f(i,n){
              f(j,m){
                  if(i==0 and j==0)
                  a[i][j]="W";
                  else a[i][j]="B";
              }
          }
          f(i,n){
              f(j,m){
                  cout<<a[i][j];
              }
              cout<<endl;
          }
        
      
  }
}