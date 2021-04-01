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
    ll t;cin>>t;
    while(t--){
        ll p,a,b,c;
        cin>>p>>a>>b>>c;
        ll ans,ans1,ans2;
        ll ss=0;

       if(a>=p)ans=a-p;
       if(b>=p)ans1=b-p;
       if(c>=p)ans2=c-p;

       if(a<p){
           ll i=(p+a-1)/a;
           ans=i*a;
           ans-=p;

       }
        if(b<p){
              ll j=(p+b-1)/b;
           ans1=b*j-p;

       }
     if(c<p){
           ll k=(p+c-1)/c;
           ans2=k*c-p;

       }
    
    
     ll dd=min(ans,min(ans1,ans2));
    if(a==p || b==p || c==p)cout<<0<<endl;
    else 
     cout<<dd<<endl;
    
    }
   
}