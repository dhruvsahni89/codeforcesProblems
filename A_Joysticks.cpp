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
ll a,b;
cin>>a>>b;
ll cnt=0;
if(a==1 and b==1){
    cout<<0<<endl;
}
else {
while(1){
    if(a==1){
        a++;
        b-=2;
    }
    else if(b==1){
        b++;
        a-=2;
    }
    else {
        if(a<=b){
            a+=1;
            b-=2;
        }
        else {
            a-=2;
            b+=1;
        }

    }
    cnt++;
    if(a<=0|| b<=0)break;
    if(a==1 and b==1)break;
    
}
cout<<cnt<<endl;
}

  
}
