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
     ll ans=0;
       string s;
       cin>>s;
       ll x,y;
       ll cnt=0,cnt1=0,cntx=0;
      ll n=s.length();
     
     
      f(i,n){
         if(s[i]=='('){
              x=i;
             

         }

         else if(s[i]==')')
         y=i;

         else cntx++;
      }
      for(ll j=n-1;j>=0;j--){
          if( s[j]==')'){
               y=j;
              break;
          }
      }
      for(ll k=0;k<y;k++){
          if(s[k]=='?')
          cnt++;

      }
      for(ll g=x;g<n;g++){
          if(s[g]=='?')
          cnt1++;
      }

      if(x<y){
          if(cntx%2==0)
          cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
      }
      else {

          
          if(cnt && cnt1 && (cnt + cnt1 + x-y-1) %2==0)
          cout<<"YES"<<endl;
          else cout<<"NO"<<endl;

      }
    
    }
}