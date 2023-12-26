#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll ans=0,temp=1;
    while(temp<k){
        temp*=2;
        
        //1<<temp;
        ans++;

    }
    if(temp<n)ans+=(n-temp+k-1)/k;
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}