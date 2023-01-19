#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    int k=0;
    while((1<<(k+1))<=(n-1))++k;
    for(int i=(1<<k)-1;i>=0;i--){
        cout<<i<<" ";
    }
    for(int i=(1<<k);i<n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
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