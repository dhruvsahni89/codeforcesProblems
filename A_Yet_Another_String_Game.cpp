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
        ll j=0;
        f(i,s.size()){
            if(i%2==0){
                if(s[i]=='a'){
                    s[i]='b';
                }
                else s[i]='a';
                j=1;
            }
            else {
                if(s[i]=='z'){
                    s[i]='y';
                }
                else s[i]='z';
                j=0;
            }
        }
        cout<<s<<endl;
    
    }
   
}