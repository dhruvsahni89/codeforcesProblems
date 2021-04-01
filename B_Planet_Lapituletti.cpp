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
int a[10] = {0, 1, 5, -1, -1, 2, -1, -1, 8, -1};
ll h,m;

bool check(int x,int y){
    if(a[x/10]==-1 || a[x%10]==-1 || a[y/10]==-1 || a[y%10]==-1){
        return 0;
    }
    int xx=a[y%10]*10 + a[y/10];
    int yy=a[x%10]*10 + a[x/10];
    if(xx<h and yy<m)return 1;
    else 
    return 0;
}
int main()
{
    fastIO

 ll t;cin>>t;
 while(t--){
    
  
  cin>>h>>m;
  string s;
  cin>>s;
  int aa=(s[0]-'0')*10 + (s[1]-'0');
  int bb=(s[3]-'0')*10 + (s[4]-'0');
  while(!check(aa,bb)){
      bb++;
      if(bb==m){
          aa++;
          
      }
      aa%=h;
      bb%=m;

  }
  cout<<aa/10<<aa%10<<":"<<bb/10<<bb%10<<endl;
 }
}