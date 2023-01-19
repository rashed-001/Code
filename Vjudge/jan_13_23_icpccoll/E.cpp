#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n,t;
    cin>>n>>t;
    int res=0;
    int rem=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        res+=(x+t);
        res-=max(x,rem);
        rem=x+t;
    }
    cout<<res<<endl;
}
int main()
{
	int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}