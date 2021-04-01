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
ll a[6];
map<ll,ll>m;
f(i,6){
    cin>>a[i];
    m[a[i]]++;
}
ll ans=0;
for(auto x:m){
    if(x.second>=4)ans=1;

}
if(ans==0)cout<<"Alien"<<endl;
else {
    ll g=0;
    for(auto x:m){
        if(x.second==2 || x.second==6){
            g=1;

        }
    }
    if(g==1)cout<<"Elephant"<<endl;
    else cout<<"Bear"<<endl;
}
}