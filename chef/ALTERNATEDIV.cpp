#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++)
    {
        if(i%2)cout<<i<<" ";
        else cout<<(i-1)*2<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}