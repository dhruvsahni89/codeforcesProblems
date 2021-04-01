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
     ll y,k,n;
     cin>>y>>k>>n;
     ll s,cnt=0;

     if(y%k==0)s=k;
     else {
         s=k-(y%k);
     }
    while(s+y<=n){
        cnt++;
        cout<<s<<" ";
        s+=k;
    }
    if(cnt==0)cout<<-1<<endl;
    cout<<endl;
     
     
     
 }
   
}
