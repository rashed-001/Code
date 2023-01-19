#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,m;
    cin>>n>>m;
    ll sum=0;
    for(int i=1;i<=n;i++){
        sum+=(i*i*m);
    }
    cout<<sum<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}