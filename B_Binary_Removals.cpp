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

 ll t;cin>>t;
 while(t--){
string s;
cin>>s;
ll n=s.size();
ll g=1;
f(i,n){
    if(i==0)continue;
    if(s[i]<s[i-1])g=0;
}
if(g)cout<<"YES"<<endl;
else {
    vl vone,vzero;
    f(i,n){
        if(s[i]=='0')vzero.pb(i);
        else vone.pb(i);
    }
    if(vone.size()==1 || vzero.size()==1){
        cout<<"YES"<<endl;
    }
    else {
        ll a=1,b=1;
    for(ll i=0;i<vone.size();i++){
        if(i==0)continue;
        if(vone[i]-vone[i-1]<=1)a=0;
        

    }
     for(ll i=0;i<vzero.size();i++){
        if(i==0)continue;
        if(vzero[i]-vzero[i-1]<=1)b=0;
        

    }
    if(a || b)cout<<"YES"<<endl;
    else {
        ll ans=0;

        for(ll i=0;i<vone.size();i++){
            if(i>0 and vone[i]-vone[i-1]<=1){
           
                    break;
              
            }
  ll x=vone[i];
            for(ll j=0;j<vzero.size();j++){

                if(vzero[j]>vone[i] and vzero[j]-x<=1){
                  
                    
                      
                        break;

                  
                    
                }
                x=vzero[j];
                if(j==vzero.size()-1){
                    ans=1;
                }

            }
        }
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    }
}
 }

  
 
}