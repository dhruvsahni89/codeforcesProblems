#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define f(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define pl pair<ll, ll>
#define vl vector<ll>
#define mod 1000000007
#define N 100005

int main()
{
    fastIO
 ll t=1;
 
 while(t--){
     ll n;
     cin>>n;
     ll a[n];
     ll sum=0;
     
     f(i,n){cin>>a[i];
     sum+=a[i];
     }
     if(sum%n==0)cout<<n<<endl;
     else cout<<n-1<<endl;
     
     
 }
   
}