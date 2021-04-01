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
    ll t;cin>>t;
    while(t--)
    {
       ll a[3],x;
       f(i,3)cin>>a[i];
       sort(a,a+3);
       ll ans=0;
       if(a[0]) {ans += 1;
       a[0] -= 1;
       }
        if(a[1]){ ans += 1;
         a[1] -= 1;
        }
        if(a[2]){ ans += 1;
         a[2] -= 1;
        }
        if(!a[0] && a[1]) {
            ans+= 1;}

        if(a[0] == 1 && a[2] == 1) {
            ans += 1;
            }
        if(a[0] == 1 && a[2] >= 2) {
            ans += 2;
            }
        if(a[0] == 2 && a[2] >= 2) {
            ans += 3;
            }
        if(a[0] >= 3) ans += 4;
      

       cout<<ans<<endl;
       
      
   
     
    }
}