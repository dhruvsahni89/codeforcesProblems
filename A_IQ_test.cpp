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
    ll t=1;
    while(t--){
      
      char a[4][4];
      f(i,4){
          f(j,4)cin>>a[i][j];
          

      }
      ll ans=0;
      for(ll i=0;i<3;i++){
          for(ll j=0;j<3;j++){
          ll cnt=0,cnt1=0;
          if(a[i][j]=='#')cnt++;else cnt1++;
          if(a[i+1][j]=='#')cnt++;else cnt1++;
          if(a[i][j+1]=='#')cnt++;else cnt1++;
          if(a[i+1][j+1]=='#')cnt++;else cnt1++;

          if(cnt==3 || cnt1==3 || cnt==4 || cnt1==4){
              ans=1;
              break;
          }
          
          }

      }
      if(ans)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
       
    }
   
}