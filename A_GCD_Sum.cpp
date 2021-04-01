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

ll calsum(ll n){
    ll g=0;
    while(n){
        g+=n%10;
        n=n/10;
    }
    return g;
}
int gcd(ll a, ll b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main()
{
    fastIO
    ll t;cin>>t;
    while(t--){
        ll n;
        cin>>n;
       
      while(gcd(calsum(n),n)==1){
          n++;
      }
      cout<<n<<endl;
    }
   
}
