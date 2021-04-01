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
 ll mx=INT_MIN;
 ll l=0;
 ll lengthmax=0;
 ll value=INT_MIN;
 f(i,n){
     ll x;
     cin>>x;

     if(x!=value){
         value=x;
         l=0;
         
     }
     l++;
     if(mx<value){
         mx=value;
         lengthmax=0;
     }
     if(mx==value)lengthmax=max(l,lengthmax);
 }
 cout<<lengthmax<<endl;

   
}
