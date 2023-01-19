#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll x,y;
    cin>>x>>y;
    if(x&1){
        if(y&1)cout<<"Janmansh"<<endl;
        else cout<<"Jay"<<endl;
    }
    else{
        if(y&1)cout<<"Jay"<<endl;
        else cout<<"Janmansh"<<endl;
    }
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