#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,w,m,temp,ans;
    cin>>n>>w>>m;
    temp=m-w;
    if(temp>(n*w)){
        ans=temp-(n*w);
    }
    else ans=0;
    if(ans!=0 && ans<w){
        ans=1;
    }
    else {
        if(ans%w==0)ans=ans/w;
        else ans=(ans/w)+1;
        }
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
    return 0;
}