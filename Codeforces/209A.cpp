#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int const mxn=1e6+5;
ll dp[mxn];
void solve()
{
    ll n;
    cin>>n;
    ll ans=0;
    dp[1]=1;
    dp[2]=3;
    dp[3]=6;
    for(int i=4;i<=n;i++){
        dp[i]=(dp[i-1] % mod + (dp[i-1]-dp[i-3]) % mod + mod) % mod;
        dp[i]%=mod;
    }
    ans=dp[n]%mod;
    cout<<ans<<endl;
    return;
}
int main()
{
//while(1){
    solve();
   // cout<<(sum+n+1)%mod<<endl;}//}
    return 0;
}