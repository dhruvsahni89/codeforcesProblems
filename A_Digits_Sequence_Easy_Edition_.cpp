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

 vl v;
 ll j=1;
 for(ll i=1;i<=10000;i++){
    vl digit;
    ll n=j;
    while(n){
        ll x=n%10;
        n=n/10;
        digit.pb(x);

    }
    reverse(digit.begin(),digit.end());

    for(auto g:digit){
        v.pb(g);
    }
    j++;

 }
 ll k;
 cin>>k;
 
 cout<<v[k-1]<<endl;
 
}