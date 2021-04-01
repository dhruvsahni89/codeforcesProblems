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
ll a,b,c;
cin>>a>>b>>c;
ll ans=0;
if(c%a==0 || c%b==0)cout<<"Yes"<<endl;
else {

f(i,10000){
    f(j,10000){
        if(a*i + b*j>c)break;
        if(a*i + b*j==c){
            ans=1;
            break;
        }
    }
}
if(ans)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}


  
}
