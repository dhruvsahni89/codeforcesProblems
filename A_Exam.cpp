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
ll n;
cin>>n;
 ll o = 1, p = (n+1)/2 + 1;
    if(n == 1) cout<<"1"<<endl<<1;
    else if(n == 2) cout<<1<<endl<<1;
    else if(n == 3) cout<<2<<endl<<1<<" "<<3;
    else if(n == 4) cout<<4<<endl<<3<<" "<<1<<" "<<4<<" "<<2;
    else
    {
        cout<<n<<endl;
        for(ll i = 1; i <= n; i++)
        {
            if(i%2)
            {
                cout<<o<<" ";
                o += 1;
            }
            else
            {
                cout<<p<<" ";
                p += 1;
            }
        }
    }

 
}