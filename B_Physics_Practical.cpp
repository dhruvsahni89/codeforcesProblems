#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pl pair<ll, ll>
#define vl vector<ll>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
#define N 100005

int main()
{
    fastIO
    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

    ll n, ans = INT_MAX, ans1, ans2; cin>>n;
    ll a[n], cnt[5002] = {0};
    for(ll i = 0; i < n; i++)
    {
        cin>>a[i];
        cnt[a[i]] += 1;
    }
    sort(a, a+n);
    for(ll i = 0; i < n; i++)
    {
        ll idx1 = upper_bound(a, a+n, 2*a[i])-a;
        ll idx2 = lower_bound(a, a+n, a[i]/2)-a;
        ans1 = n-(idx1-i);
        //cout<<idx1<<" "<<idx2<<" ";
        if(a[i]%2) idx2 += cnt[a[i]/2];
        ans2 = n-(i-idx2+1);
        ans = min(min(ans2, ans1), ans);
        //cout<<ans<<"\n";
    }
    cout<<ans;
    return 0;
}


