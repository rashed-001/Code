#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[200005],b[200005];
void solve()
{
    ll n,sum=0;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        sum|=arr[i];
    }
    cout<<sum<<endl;
}
/*Read the damn question carefully,show base case*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}