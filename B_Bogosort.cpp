
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
      cin>>n;
     ll a[n];
     f(i,n)cin>>a[i];
     sort(a,a+n);
     
     vl v;

    //  f(i,n){
    //      for(ll j=0;j<n;j++){
    //          if(i+1-a[i]==j+1-a[j])swap(a[i],a[j]);
    //      }

     
     for(ll i=n-1;i>=0;i--)cout<<a[i]<<" ";
     cout<<endl;
          }
        
      
  
}