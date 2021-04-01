#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,x,n) for(int i=x;i<n;i++)
#define endl ("\n")
#define pb push_back
#define mp make_pair
#define pl pair<ll, ll>
#define vl vector<ll>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define N 100005

int main(){
    fastIO
    int n;
    cin>>n;
    vector<int>v(n,0);
    ll cnt=0;

    for(ll i=1;i<=n;i++){
        if(i*i + (i+1)*(i+1)<=n){
            v[i*i]=1;
            v[(i+1)*(i+1)]=1;
            v[i*i + (i+1)*(i+1)]=1;
        }
    }
        for(ll i=1;i<=n;i++){
            if(v[i]==1)cnt++;
        }
         cout<<cnt/3<<endl;
       

    
}