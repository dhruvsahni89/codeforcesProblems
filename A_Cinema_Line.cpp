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
 int n,t,i,m,s,a;
int main(){
    fastIO
   
   cin>>n;
	for(i=0;i<n;i++){
	 cin>>a;
	 if(a==25) {t++;}
	 if(a==50) {m++; t--;}
	 if(a==100) {if(m!=0) {m--; t--; } else t-=3;	 }
 
	 if(t<0 || m<0) {cout<<"NO";return 0; }
}
cout<<"YES"; return 0;



}