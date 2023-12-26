#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[200005],b[200005];
void solve()
{
    int a,b;
    cin>>a>>b;
    if(a==0)cout<<1<<endl;
    else cout<<(a*1+b*2)+1<<endl;
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