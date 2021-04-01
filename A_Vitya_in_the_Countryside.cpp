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
#define M 1000000007


int main()
{
ll n;
cin>>n;
map<ll,ll>m;
ll a[n];
f(i,n)cin>>a[i],m[a[i]]++;

if(n==1 and a[0]==0)cout<<"UP"<<endl;
else if(n==1 and a[0]!=15)cout<<-1<<endl;
else if(n==1 and a[0]==15)cout<<"DOWN"<<endl;
else {
    ll ans=1;
    f(i,n){
        if(i==0)continue;
        if(abs(a[i]-a[i-1])!=1)ans=0;

    }
    if(ans==0)cout<<-1<<endl;
    else {
        if(a[n-1]==15)cout<<"DOWN"<<endl;
        else if(a[n-1]==0)cout<<"UP"<<endl;
        else {
            if(a[n-1]-a[n-2]==1){
           cout<<"UP"<<endl;
            }
            if(a[n-1]-a[n-2]==-1){
                cout<<"DOWN"<<endl;

            }

        }
    }
}

}
