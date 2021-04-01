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
string s;
cin>>s;
string s1="";
ll n=s.length();
ll ans=0;
f(i,n){
    if(s[i]=='0' and ans==0){
        ans=1;
        continue;


    }
    s1.pb(s[i]);
}
if(ans==1)cout<<s1;
else {
    f(j,n-1)cout<<1;

}


}
