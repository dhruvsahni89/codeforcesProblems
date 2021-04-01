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
    ll t=1;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll ans=-1;
        f(i,n){
            cin>>a[i];
            
        }
        if(a[0]!=0){
            cout<<1<<endl;
        }
        else {
            ll max=0;
            for(ll i=1;i<n;i++){
               
                if(a[i]-max>1){
                    ans=i+1;
                    break;
                }
                 if(a[i]>max){
                    max=a[i];
                }
            }
            cout<<ans<<endl;


        }
      
    
    }
   
}