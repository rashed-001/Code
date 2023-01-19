#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y;
    cin>>x>>y;
    if((x+y)%2!=0){cout<<"-1 -1"<<endl;return;}
    if(x>y){
        cout<<(x+y)/2<<" "<<0<<endl;
    }
    else cout<<0<<" "<<(x+y)/2<<endl;
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