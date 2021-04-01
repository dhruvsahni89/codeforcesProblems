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

int main(){
    fastIO
    ll n;
    cin>>n;
    if(n==1)
    cout<<2<<endl;
    else {
vl v;
    ll x=n*2;
    while(n--){
        v.pb(x);
        x--;
    }
    reverse(v.begin(),v.end());
    for(auto g:v){
        cout<<g<<" ";
    }
    }
    cout<<endl;
   

}