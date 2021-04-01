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
     ll n;
     cin>>n;
    f(i,n){
        if(i==0)
        cout<<9;
        else cout<<(i+7)%10;
    }
    cout<<endl;
   
   
     
    }
}