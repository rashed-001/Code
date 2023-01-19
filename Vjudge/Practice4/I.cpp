#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

void solve()
{
    ll n,m,kop=1;
    cin>>m>>n;
    for(int i=1; i<=m; i++)kop*=2;
    if(n==0&&m==1)
    {
        cout<<1<<endl;
        return ;
    }
    if(n==1&&m==1)
    {
        cout<<2<<endl;
        return ;
    }
    if(n==0&&m>=2)
    {
        cout<<kop<<endl;
        return ;
    }
    if(n!=0&&m>=2)
    {
        cout<<kop-1<<endl;
        return ;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}