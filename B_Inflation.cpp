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
    ll t;cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        double a[n];
        for(ll i=0;i<n;i++)cin>>a[i];
        ll x=0;
      
        double sum=a[0];
        for(ll i=1;i<n;i++){
         double inc= (a[i]*100)/((double)(k));
           
            if(sum < ceil(inc)) 
            {
                x+= (ceil(inc)-sum);
                sum+= a[i]+(ceil(inc)-sum);
            }
            else sum+= a[i];
        }
        cout<<x<<endl;
       
      

    }
   
}