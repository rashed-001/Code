#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
void solve()
{
    ll col,row;
    cin>>row>>col;
    ll res=(row*col);
    if(res%3==0)cout<<res/3<<endl;
    else cout<<(res/3)+1<<endl;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}
