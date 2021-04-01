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

int main()
{
    fastIO
    ll t;cin>>t;
    while(t--){
       
        
        
ll m, sum = 0, x0, x1, x2, y0, y1, y2;

	cin >> x0 >> x1 >> x2 >> y0 >> y1 >> y2;

	m = min(x0, y2);
	x0 -= m;
	y2 -= m;

	m = min(x1, y0);
	x1 -= m;
	y0 -= m;

	m = min(x2, y1);
	x2 -= m;
	y1 -= m;
	sum += 2 * m;

	sum -= 2 * min(x1, y2);

	cout << sum << endl;
    }
   
}