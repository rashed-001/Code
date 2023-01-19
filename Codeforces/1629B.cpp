#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[105],b[105];
void solve()
{
    ll l,r,k;
    cin>>l>>r>>k;
    if(l==r&&l==1&&r==1){
        cout<<"NO"<<endl;
        return;
    }
    if(l==r){
        cout<<"YES"<<endl;
        return;
    }
    int L=(r-l)+1;
    int even=r/2;
    even-=(l-1)/2;
    int odd=L-even;
    if(odd>k){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
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