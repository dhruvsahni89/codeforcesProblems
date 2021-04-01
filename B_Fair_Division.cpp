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
    ll t; cin>>t;
    while(t--)
    {
     ll n;
     cin>>n;
     ll k=0;
     ll cnt=0,cnt2=0,cnt1=0;
     ll a[n];
     f(i,n){
         cin>>a[i];
         if(a[i]==1){
         cnt2++;
         }
         else {
             cnt1++;
         }
         
         cnt+=a[i];
         


     }
     if(cnt2==n){
         if(cnt2%2!=0)
         k=1;
     }
     if(cnt1==n){
         if(cnt1%2!=0)
         k=1;
     }

     if(cnt%2==0 && k==0){
           cout<<"YES"<<endl;
     }
     else cout<<"NO"<<endl;
       

    }
}