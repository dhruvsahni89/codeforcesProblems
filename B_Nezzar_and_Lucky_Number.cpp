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


int main()
{
    fastIO
    ll t;cin>>t;
    while(t--){
        ll q,d;
        cin>>q>>d;
       for (int i = 0; i < q; i++)
		{
			int flag = 0;
			int x;
			cin >> x;
			if (x >= d * 10)
				flag = 1;
			if (flag == 0)
			{
				while (x >= d)
				{
					if (x % d == 0)
					{
						flag = 1;
						break;
					}
					x -= 10;
				}
			}
			if (flag)
			{
				cout << "YES\n";
			}
			else
			{
				cout << "NO\n";
			}
		}
    }
   
}