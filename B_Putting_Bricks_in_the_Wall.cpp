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
    fastIO
    ll t; cin>>t;
    while(t--){
    ll n;
    cin>>n;
    char c[n][n];
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < n; j++)
      {
        cin >> c[i][j];
      }
    }
    vector<pair<int, int>> v;
    int a = c[0][1] - '0';
    int b = c[1][0] - '0';
    int x = c[n - 1][n - 2] - '0';
    int y = c[n - 2][n - 1] - '0';
    if(a + b == 0)
    {
      if(x == 0)
      {
        v.push_back({n - 1, n - 2});
      }
      if(y == 0)
      {
        v.push_back({n - 2, n - 1});
      }
    }
    else if(a + b == 2)
    {
      if(x == 1)
      {
        v.push_back({n - 1, n - 2});
      }
      if(y == 1)
      {
        v.push_back({n - 2, n - 1});
      }
    }
    else if(x + y == 0)
    {
      if(a == 0)
      {
        v.push_back({0, 1});
      }
      if(b == 0)
      {
        v.push_back({1, 0});
      }
    }
    else if(x + y == 2)
    {
      if(a == 1)
      {
        v.push_back({0, 1});
      }
      if(b == 1)
      {
        v.push_back({1, 0});
      }
    }
    else
    {
      if(a == 1)
      {
        v.push_back({0, 1});
      }
      if(b == 1)
      {
        v.push_back({1, 0});
      }
      if(x == 0)
      {
        v.push_back({n - 1, n - 2});
      }
      if(y == 0)
      {
        v.push_back({n - 2, n - 1});
      }
    }
    cout << (int) v.size() << "\n";
    for(auto i : v)
    {
      cout << i.first + 1 << " " << i.second + 1 << "\n";
    }
    }
  
}