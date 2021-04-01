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
vl v;
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
        if (prime[p])v.pb(p);
           
}

int main()
{
    fastIO
  ll n;
  cin>>n;
  {
      ll mn=INT_MAX;
      for(ll i=1;i<=sqrt(n);i++){
          if(n%i==0){
              mn=min(mn,i+(n/i));
          }

      }
      ll s=sqrt(n);
    // while(s*s<n){
    //     s++;
    // }
   ll d=s;
   if(s*d<n)s++;
   if(s*d<n)d++;
      cout<<s+d<<endl;
  }
  

   
}
