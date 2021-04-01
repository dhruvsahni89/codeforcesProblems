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
    double x, y; cin>>x>>y;
    if(x == y) cout<<"=";
    else 
    {
        double d = log(x);
        double X = y*d;
        double e = log(y);
        double Y = x*e;
        if(X > Y) cout<<">";
        else if(X < Y) cout<<"<";
        else cout<<"=";
        return 0;
    }
  
}
