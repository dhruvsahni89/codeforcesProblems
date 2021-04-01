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
     ll n,m,w;
     cin>>n>>m>>w;
     ll cnt=0,k=0,x=0;
     if(n%2==0){
         
         while(n%2==0){
             cnt++;;
             n=n/2;
             
             
         }
     }
     if(m%2==0){
         
         while(m%2==0){
             cnt++;;
             m=m/2;
             
             
         }
     }
     if(pow(2,cnt)>=w || w==1)
     cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
     
       

    }
}