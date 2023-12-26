#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[200005],b[200005];
void solve()
{
    int x,y;
    cin>>x>>y;
    if(x==0&&y==0){cout<<0<<endl; return ;}
    int temp=0;
    int d = x*x+y*y;
    while(temp*temp<d)temp++;
    if(temp*temp==d)cout<<1<<endl;
    else cout<<2<<endl;
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