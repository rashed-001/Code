#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1)cout<<"YES"<<endl;
    else if(n==2){
        if(s[0]=='1'&&s[1]=='0')cout<<"YES"<<endl;
        else if(s[0]=='0'&&s[1]=='1')cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
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