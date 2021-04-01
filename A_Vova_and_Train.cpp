#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
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

ll t;
cin>>t;
while(t--){
    ll x,y,l,r;
    cin>>x>>y>>l>>r;
     ll ans=x/y;
     ll cnt=(r/y)-(l-1)/y;
//    ll cnt=0;
//   if(r==l) {
//       if(r%y==0)cnt=r/y;
//   }
//   else  {
// //       ll g=(r-l-1);
// //   cnt=(g+y-1)/y;
 
//       ll j=(l/y);
//       ll f=y*j;
//       if(y!=1){
//       while(f<=r){
          
//           if(f<=r and f>=l)
//           cnt++;

//           f=y*j;
//           j++;
          
          
//       }
//       }
//       else {
//           cnt=(r-l+1)/y;
//       }
 

//   }
// //   cnt+=(r%y==0);
// //   cnt+=(l%y==0);
 
   cout<<ans-cnt<<endl;

  
  

   
}
}