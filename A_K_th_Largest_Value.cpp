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
  ll n,q;
  cin>>n>>q;
  ll cnt0=0,cnt1=0;
  ll a[n];
  f(i,n){cin>>a[i];
  if(a[i])cnt1++;
  else cnt0++;
  }
  while(q--){
      ll x,y;
      cin>>x>>y;
      if(x==1){
          if(a[y-1]==0){
              cnt1++;
              cnt0--;
          }
          else {
              cnt1--;
              cnt0++;
          }
          
          a[y-1]=1-a[y-1];
      }
      else {
          if(cnt1>=y)cout<<1<<endl;
          else cout<<0<<endl;

      }
  }

   
}