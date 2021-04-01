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
       ll a[4], cnt = 0;
        cin>>a[0]>>a[1]>>a[2]>>a[3];
        for(ll i = 0; i < 4; i++)
        {
            if(a[i]%2) cnt += 1;
        }
        if(cnt == 1 || cnt == 0) cout<<"Yes"<<endl;
        else if(cnt == 3 && a[0] && a[1] && a[2]) cout<<"Yes"<<endl;
        else if(cnt == 4) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
   
}