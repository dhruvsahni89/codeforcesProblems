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

       string s;
       cin>>s;
       ll cnt=0;
       ll idx;
       f(i,n){
           if(s[i]=='*'){
               s[i]='x';
               idx=i;
               cnt++;
               break;
           }
       }
       for(ll i=n-1;i>=0;i--){
           if(s[i]=='*'){
               s[i]='x';
               cnt++;
               break;
           }
       }
       ll ans=0;
       ll curr;

       for(ll i=idx;i<n;i++){
           if(s[i]=='x'){
               curr=i;
               ans=0;
           }
           else ans++;

           if(ans==k){
               if(s[i]=='*'){
                   s[i]='x';
                   cnt++;
                   ans=0;
               }
               if(s[i]=='.'){
                  for(ll j=i;j>curr;j--){
                      if(s[j]=='*'){
                          cnt++;
                          s[j]='x';
                          ans=i-j;
                          break;
                      }
                  }
               }
           }
          
       }
      
       cout<<cnt<<endl;

    
    }
   
}
