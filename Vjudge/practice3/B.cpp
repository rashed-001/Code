#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    vector<ll>v;
    int x,y;
    cin>>x>>y;
    // if(x<y)
    // {
    //     cout<<"1 0 "<<y<<endl;
    //     return;
    // }
    // if(y==1){
    //      cout<<"1 0 "<<x<<endl;
    //      return;
    // }
    int s=1;
    while(1)
    {
        int rem=x%y;
        x/=y;
        v.push_back(x);
        x=y;
        y=rem;
        if(y==0)break;

    }
    cout<<v.size()-1<<" ";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}