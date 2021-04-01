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
    fastIO
  ll n,m;
  cin>>n;
  ll ans=0;
  ll r,c;
  for(ll i=1;i<=sqrt(n);i++){
      if(n%i==0 and (i>=5  and n/i>=5)){
          ans=1;
         r=i;
         c=n/i;
          break;

      }

  }
  if(ans==0)cout<<-1<<endl;
  else {
     string s = "aeiou";
    for(ll i = 0; i < r; i++)
    {
        string s1;
        cout<<s;
        for(ll j = 5; j < c; j++) cout<<s[0];
     
        for(ll j = 0; j < 5; j++)
        {
            if(j == 0) s1.pb(s[4]);
            else s1.pb(s[j-1]);
        }
       
        s = s1;
    }

  }
 
   
}
