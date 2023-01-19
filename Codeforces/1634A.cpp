#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string s1=s;
    reverse(s.begin(),s.end());
    if(s==s1||k==0)cout<<1<<endl;
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