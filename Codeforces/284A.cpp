#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
void solve()
{
    ll col,row;
    cin>>row>>col;
    ll x = col%3;
    ll ans=0;
    if(x==1){
        ans+=(col/3)*row;
        if(row%3==0){
            ans+=row/3;
        }
        else ans+=row/2;
    }
    else if(x==2){
        ans+=(col/3)*row;
        if(row%3==0){
            ans+=(row/3)*2;
        }
        else ans+=row;
    }
    else{
        ans+=(col/3)*row;
    }
cout<<ans<<endl;
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
