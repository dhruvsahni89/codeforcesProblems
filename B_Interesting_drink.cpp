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


int main()
{
ll n;
cin>>n;

 ll a[n];
 map<ll,ll>m;
 f(i,n)cin>>a[i],m[a[i]]++;
 sort(a,a+n);

 for(ll j=1;j<=a[n-1];j++){
     m[j]=m[j]+m[j-1];
 }
 ll q;
 cin>>q;
 ll g;
 f(j,q){
     ll x;
     cin>>x;
     if(x>a[n-1])cout<<n<<endl;
     else cout<<m[x]<<endl;
    

  
}
}