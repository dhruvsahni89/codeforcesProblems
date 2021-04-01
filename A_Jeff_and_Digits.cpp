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
   
   ll n;
   cin>>n;
   ll a[n];
   ll z=0,f=0;
   f(i,n){
       cin>>a[i];
    if(a[i]==0)z++;
            else f++;
        }
        string ans="";
        if(z==0)cout<<-1;
        else if(z>0 and f<9)cout<<0;
        else{
            int x=f/9;
            while(x--){
                ans+="555555555";
            }
            while(z--){
                ans+="0";
            }
            cout<<ans;
        }
   
}