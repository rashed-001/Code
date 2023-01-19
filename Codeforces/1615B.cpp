#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll pref[200005][31];
void lol()
{
    ll N=2e5+5;
    for(ll i=1;i<N;i++){
        for(ll j=0;j<=30;j++){
            if(i&(1<<j))pref[i][j]=1;
            pref[i][j]+=pref[i-1][j];
        }
    }
}
void solve()
{
     ll l,r;
        cin>>l>>r;
        ll temp=r-l+1;
        ll res=1e10;
        for(ll i=0;i<=30;i++){
            ll neww = (pref[r][i]-pref[l-1][i]);
            res = min(res,temp-neww);
        }
        cout<<res<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lol();
    int t=1;
    cin>>t;
    while(t--)
    {
       solve();
    }
    return 0;
}