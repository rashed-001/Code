#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll const mod = 1e12+7;
ll powerMod(ll a, ll b, ll m)
{
    ll res = 1;
    a = a % m;
    while(b>0)
    {
        if(b&1)
            res = (res * a) % m;
        
        a = a * a;
        b = b >> 1;
    }
    return res;
}
void solve()
{
    int n;
    cin>>n;
    ll res = powerMod(2,n,mod);
    cout<<res-n-1<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}