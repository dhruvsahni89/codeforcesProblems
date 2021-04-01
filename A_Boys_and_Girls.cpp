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
#define endl "\n"
#define N 100005

int main()
{
    fastIO

 
 
    ll n,m;
    cin>>n>>m;
    if(n>=m){
        f(i,n-m)cout<<"B";
         f(j,m)cout<<"GB";

         cout<<endl;

    }
    else {
        f(i,m-n)cout<<"G";
        f(j,n)cout<<"BG";
        cout<<endl;
    }
     
     return 0;
 
   
}
