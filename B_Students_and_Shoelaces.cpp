
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,n) for(int i=0;i<n;i++)
#define endl ("\n")
#define pb push_back

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
   ll n,m;
   cin>>n>>m;
   map<int,set<int>>mp;
   f(i,m){
       ll a,b;
       cin>>a>>b;
       mp[a].insert(b);
       mp[b].insert(a);
   }

   ll ans=0;
   bool flag=true;
   while(flag){

       flag=false;
       set<pair<int,int>>s;

       for(auto x:mp){
           if(x.second.size()==1){
               s.insert(x.first,*x.second.begin());
           }
       }
       if(s.size()>0){
           ans++;
           for(auto g:s){
               mp[g.first].erase(g.second);
               mp[g.second].erase(g.first);
           }
           flag=true;
       }
   }
   cout<<ans<<endl;
}