#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios::sync_with_stdio(false);cin.tie(NULL);
#define f(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define pl pair<ll, ll>
#define vl vector<ll>
#define mod 1000000007
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
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll g=1;
      
        if(n%2!=0)cout<<"YES"<<endl;
        else {

       while(n%2==0){
          
           n=n/2;
       }
       if(n==1)cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
        }
    
    }
   
}