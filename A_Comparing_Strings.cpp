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
string s;
string s1;
cin>>s;
cin>>s1;
ll idx1,idx2;
if(s.length()!=s1.length())cout<<"NO"<<endl;
else {
    ll d=0,g=0;
    ll cnt=0;
    f(i,s.length()){
        if(s[i]!=s1[i]){
            cnt++;


        }
        if(cnt==1 and d==0){idx1=i;
        d=1;
        }
        if(cnt==2 and g==0){idx2=i;
        g=1;
        }
    }
    if(cnt==2)
    swap(s[idx1],s[idx2]);
    // cout<<s<<endl;
    if(cnt==0 )cout<<"YES"<<endl;
    else if(cnt==2 and s==s1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}