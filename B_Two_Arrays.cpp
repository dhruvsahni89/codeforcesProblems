#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios::sync_with_stdio(false);cin.tie(NULL);
#define f(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define pl pair<ll, ll>
#define vl vector<ll>
#define mod 1000000007
#define N 100005

void SieveOfEratosthenes(ll n)
{
    
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (ll p = 2; p * p <= n; p++)
    {
        
        if (prime[p] == true) 
        {
           
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
  
    for (ll p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}

void solve() {
	int n, tar;
	cin >> n >> tar;
	int curMid = 0;
	for (int i = 0; i < n; ++i) {
		int x; cin >> x;
		int r;
		if (tar % 2 == 0 && x == tar/2)
			r = (curMid++) % 2;
		else if (2*x < tar)
			r = 0;
		else
			r = 1;
		cout << r <<" ";
	}
    cout<<endl;
}
int main()
{
    fastIO
    ll t;cin>>t;
    while(t--){
    
    // ll n,u;
    // cin>>n>>u;
    // ll a[n];
    // f(i,n)cin>>a[i];
    // sort(a,a+n);
    // ll y,x;
    // vl v(n);
    // f(d,n){
    //     if(a[d]>=u){
    //         y=d;
    //         break;
    //     }

    // }
     
    // f(j,n){
    //     if(a[j]<u){
    //         x=j;
            
    //     }

    // }
    // if(y>=0){
    //     for(ll j=y;j<n;j++){
    //         v[j]=1;
    //     }
    // }
    // ll k=0;
    // for(ll i=x;i>=0;i--){
    //     if(k<=i){
    //     ll s=u-a[i];
    //     if(a[k]==s){
    //         v[k]=1;
    //         v[i]=0;
    //         k++;
    //     }
        
    //     else {
    //         v[k]=0;
    //         v[i]=0;
            
    //     k++;
    //     }
    //     }
        

        solve();

    // }
    // for(auto g:v)cout<<g<<" ";
    // cout<<endl;



    }
   
}