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
#define N 100005
int main()
{

	
fastIO;
int tc;cin>>tc;
while(tc--)
{
	ll sum=0;
	ll n;cin>>n;
	ll a[n];
	f(i,n) cin>>a[i];
	sort(a,a+n);
	ll f=1;
	for(ll i=n-1;i>=0;i--)
	{
		if(f)
		{
			f=0;
			if(a[i]%2==0) sum+=a[i];
		}
		else
		{
			f=1;
			if(a[i]%2) sum-=a[i];
		}
	}
	if(sum==0) cout<<"Tie"<<endl;
	else if(sum>0) cout<<"Alice"<<endl;
	else cout<<"Bob"<<endl;
	
	
}
return 0;
}