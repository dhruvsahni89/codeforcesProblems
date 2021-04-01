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
void SieveOfEratosthenes(ll n)
{
    
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (ll p = 2; p * p <= n; p++)
    {
        
        if (prime[p] == true) 
        {
           
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
  
    for (ll p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}

int main()
{
    fastIO
    ll t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll n=s.length();
        f(i,s.length()){
            if(s[i]=='?' and i==0){
                if(s[i+1]!='a')s[i]='a';
                else if(s[i+1]!='c')s[i]='c';
                else if(s[i+1]!='b')s[i]='b';
               
                continue;
            }
            if(s[i]=='?' and i!=s.length()-1){
                 if(s[i-1]=='a' and s[i+1]=='b' || s[i-1]=='a' and s[i+1]=='a' || s[i-1]=='b' and s[i+1]=='a' || s[i-1]=='b' and s[i+1]=='b' || s[i-1]=='a' and s[i+1]=='?' || s[i-1]=='b' and s[i+1]=='?')s[i]='c';
                else if(s[i-1]=='b' and s[i+1]=='b' || s[i-1]=='b' and s[i+1]=='c' || s[i-1]=='c' and s[i+1]=='b' || s[i-1]=='c' and s[i+1]=='c' || s[i-1]=='b' and s[i+1]=='?' || s[i-1]=='c' and s[i+1]=='?' )s[i]='a';
                else if(s[i-1]=='a' and s[i+1]=='a' || s[i-1]=='a' and s[i+1]=='c' || s[i-1]=='c' and s[i+1]=='a' || s[i-1]=='c' and s[i+1]=='c' || s[i-1]=='a' and s[i+1]=='?' || s[i-1]=='c' and s[i+1]=='?')s[i]='b';
                

            }
            if(s[i]=='?' and i==s.length()-1){
                if(s[i-1]!='a')s[i]='a';
                  else if(s[i-1]!='c')s[i]='c';
                else if(s[i-1]!='b')s[i]='b';
                
            }

        }
        ll ans=1;
        f(i,n){
            if(i==n-1)break;
            if(s[i+1]==s[i]){
                ans=0;
                break;
            }
        }
        if(ans)
        cout<<s<<endl;
        else cout<<-1<<endl;
      
    }
   
}