#include <bits/stdc++.h>
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
ll ans=0;
ll x=n;
x++;
ans++;
while(x%10!=0){
    x++;
    ans++;
}

while(x%10==0){
    x=x/10;
}

ll g=x;
while(x%10!=0){
    
    x++;
    
}
ans+=2*(x-g);


cout<<ans<<endl;

}
