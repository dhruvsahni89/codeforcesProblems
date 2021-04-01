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
bool isBalanced(string expr) {
   stack<char> s;
   char ch;
   for (int i=0; i<expr.length(); i++) {    //for each character in the expression, check conditions
      if (expr[i]=='('||expr[i]=='['||expr[i]=='{') {    //when it is opening bracket, push into     stack
         s.push(expr[i]);
         continue;
      }
      if (s.empty())    //stack cannot be empty as it is not opening bracket, there must be closing     bracket
         return false;
         switch (expr[i]) {
            case ')':    //for closing parenthesis, pop it and check for braces and square brackets
               ch = s.top();
               s.pop();
               if (ch=='{' || ch=='[')
                  return false;
                  break;
            case '}': //for closing braces, pop it and check for parenthesis and square brackets
               ch = s.top();
               s.pop();
               if (ch=='(' || ch=='[')
                  return false;
                  break;
            case ']': //for closing square bracket, pop it and check for braces and parenthesis
               ch = s.top();
               s.pop();
               if (ch =='(' || ch == '{')
                  return false;
                  break;
         }
      }
      return (s.empty()); //when stack is empty, return true
}


int main()
{
    fastIO

 ll t;cin>>t;
 while(t--){
     
     string s;
     cin>>s;
     ll n=s.length();
     
ll extra=0;
     if(s[0]==s[n-1])cout<<"NO"<<endl;
     else {
         ll ans=0;
    char x=s[0];
    char y=s[n-1];
    string s2=s;
    f(i,n){
        if(s[i]==x){
            s[i]='(';
        }
        else if(s[i]==y)s[i]=')';

        else s[i]='(';
    }
     f(i,n){
        if(s2[i]==x){
            s2[i]='(';
        }
        else if(s2[i]==y)s2[i]=')';

        else s2[i]=')';
    }
    if(isBalanced(s)){
        ans=1;
    }
    if(isBalanced(s2))ans=1;
    if(ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


 }
 }
}