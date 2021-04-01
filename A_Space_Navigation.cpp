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
        ll px,py;
        string s;
        cin>>px>>py;
        cin>>s;
        ll r=0,l=0,u=0,d=0;
       f(i,s.size()){
           if(s[i]=='U')u++;
           else if(s[i]=='D')d++;
           else if(s[i]=='R')r++;
           else l++;
       }
       ll ans=0;

       if(px<=0 and l>=abs(px) and py<=0 and d>=abs(py)){
           ans=1;
       }
       if(px>=0 and r>=abs(px) and py>=0 and u>=abs(py)){
           ans=1;
       }
       if(px<=0 and l>=abs(px) and py>=0 and u>=abs(py)){
           ans=1;
       }
       if(px>=0 and r>=abs(px) and py<=0 and d>=abs(py)){
           ans=1;
       }
       if(ans)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    
    }
   
}