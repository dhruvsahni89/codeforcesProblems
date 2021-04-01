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
    fastIO
ll n;
cin>>n;
ll a[n];
ll cntodd=0;
f(i,n){cin>>a[i];
if(a[i]<0)cntodd++;
}
sort(a,a+n);
vl v,v1;
cout<<1<<" "<<a[0];
cout<<endl;
ll g=0;
if(cntodd%2==0){
    g=1;

}
if(g==1){v1.pb(a[1]);
for(ll j=2;j<n;j++){
    if(a[j]!=0)v.pb(a[j]);
    else v1.pb(0);
}
}
else {
    for(ll j=1;j<n;j++){
    if(a[j]!=0)v.pb(a[j]);
    else v1.pb(0);
}

}
cout<<v.size()<<" ";
for(auto x:v)cout<<x<<" ";
cout<<endl;
cout<<v1.size()<<" ";
for(auto g:v1)cout<<g<<" ";
cout<<endl;

  
 
}