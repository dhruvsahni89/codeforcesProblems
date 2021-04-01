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

 ll t=1;
 
 while(t--){
     ll n,x,y;
     string s;
     cin>>n>>x>>y>>s;
    
	
	
	int cnt = 0;
	for (ll i = n-x; i<n; i++) {
		if (i == n-y-1)cnt+=s[i]== '0';
		else cnt+= s[i]=='1';
	}
    cout<<cnt<<endl;
	
 }
 
}