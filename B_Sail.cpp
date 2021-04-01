#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define f(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define pl pair<ll, ll>
#define vl vector<ll>
#define mod 1000000007

 ll t,sx,sy,ex,ey;
  int e,s,n,w;
  string ch;

int main(){
    

 cin>>t>>sx>>sy>>ex>>ey;
 
  

 
 
 if(sx<ex) e=ex-sx;
 else w=sx-ex;
 if(sy<ey) n=ey-sy;
 else s=sy-ey;
  cin>>ch;
  ll d=1;

 for(ll i=0;i<t;i++){
    if (ch[i]=='S') s--;
		else if (ch[i]=='N') n--;
		else if (ch[i]=='E') e--;
		else w--;
		if ((s<=0 && n<=0) && (e<=0 && w<=0)) {
            d=0;
			cout<<i+1<<endl;
            break;
			
		}


 }
 if(d==1)
 cout<<-1<<endl;
 
}
