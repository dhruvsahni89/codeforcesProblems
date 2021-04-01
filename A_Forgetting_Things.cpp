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
    while(t--)
    {
     ll n,x;
     
     cin>>n>>x;
     if(x-n==1){
         cout<<n<<" "<<x<<endl;

     }
     else if(x-n==0){
         cout<<n*10<<" "<<(x*10)+1<<endl;
     }
     else if(n==9 && x==1)
     cout<<9<<" "<<10<<endl;
     else cout<<-1<<endl;
     
    }
}