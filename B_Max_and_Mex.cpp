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
    
  
 ll n,k;
 cin>>n>>k;
 ll mx=INT_MIN;
ll a[n];
f(i,n){cin>>a[i];
mx=max(mx,a[i]);
}
ll ans=1;
ll cnt=0;
ll mex=n;
sort(a,a+n);
set<int>s;

map<int,int>m;
f(i,n){
   
    if(a[i]!=i){
        if(i==0){mex=0;
        
        break;}
        else {mex=a[i-1]+1;
        break;}

        break;
        
    }
}

f(i,n){
   m[a[i]]++;
   s.insert(a[i]);

}
ll final=n;
if(mex==n || k==0)cout<<n+k<<endl;
else {
    ll x=(mex+mx+1)/2;
    if(m[x]){
        cout<<n<<endl;
    }
    else {
        ll k=0;
        m[x]++;
        s.insert(x);
        k--;
        ll j=0;
        for(auto g:s){
            if(g!=j){
                k=1;
                final=n+1;
                break;
            }

        }
        if(k)cout<<n+k<<endl;
        else cout<<n+1<<endl;

    }

   
}

  }
  
 
}