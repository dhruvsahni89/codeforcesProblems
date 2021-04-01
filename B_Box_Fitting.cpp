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
    ll t;cin>>t;
    while(t--){
        ll n,w;
        cin>>n>>w;
        multiset<ll>ms;
        f(i,n){ll x;cin>>x;ms.insert(x);
        }
        ll h=1;
        ll left=w;
        while(!ms.empty()){

            auto it=ms.upper_bound(left);
            if(it==ms.begin()){
                left=w;
                h++;
            }
            else {
                it--;
                left-=*it;
                ms.erase(it);
            }
        }
       cout<<h<<endl;
}
}
