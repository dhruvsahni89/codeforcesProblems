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
        if (prime[p])
            v.pb(p*p);
}

int main()
{
    fastIO
    
    SieveOfEratosthenes(1000004);
   sort(v.begin(),v.end());
   
   ll n;
   cin>>n;
   ll a[n];
   f(i,n){
       cin>>a[i];
   }
   f(i,n){
     ll low=0;
     ll high=v.size();
     ll mid;
     
    //  while(low<=high){
    //       mid=(low+high)/2;
    //      if(v[mid]>a[i]){
    //          high=mid-1;

    //      }
    //      else if(v[mid]<a[i]) {
    //          low=mid+1;
    //      }
    //      else {
    //          g=1;
    //          break;

    //      }
    //  }
    bool g=binary_search(v.begin(),v.end(),a[i]);
     if(g)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
   }
       
       
   
     
    
    
   
}