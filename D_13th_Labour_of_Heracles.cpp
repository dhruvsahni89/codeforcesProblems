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
    while(t--)
    {
     ll n;
     cin>>n;
     ll sum=0;
    ll w[n+1];
    for(int i=1;i<n+1;i++)cin>>w[i],sum+=w[i];
  
       vector<int>v(n+1);

    for(ll j=1;j<n;j++){
          ll x,y;
        cin>>x;
        cin>>y;
        v[x]++;
        v[y]++;



    }
    pair<int,int>p;
    priority_queue<pair<int,int>>q;


 
    for(int i=1;i<n+1;i++){
        v[i]--;
        if(v[i]>0){q.push({w[i],v[i]});}

    }
    cout<<sum<<" ";
    for(int j=2;j<n;j++){
        p=q.top();
        sum+=p.first;
        p.second=p.second-1;
        q.pop();
        if(p.second>0)q.push(p);
        cout<<sum<<" ";

    }
    cout<<endl;
       

    }
}