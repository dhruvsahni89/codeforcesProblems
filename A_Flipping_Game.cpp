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
#define N 1000005
#define M 1000000007

 ll idx[N];
int main()
{
    fastIO
    ll n;
    cin>>n;
    ll a[n];
    ll cnt=0;
    ll ans=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        ans+=a[i];
    }
    ll p[n];
    p[-1]=0;
    f(i,n){
        p[i]=p[i-1]+a[i];
    }

    ll mn=INT_MIN;
    ll x=0;
   
    f(i,n){
      cnt=ans;
        for(ll j=i;j<n;j++){
            
            if(a[j]==0)cnt++;
            else cnt--;
            
           
            mn=max(mn,cnt);

        }

    }
    cout<<mn<<endl;
}
