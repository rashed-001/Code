#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[200005];
void solve()
{
    ll w,h;
    cin>>w>>h;
    ll res=0;
    ll k;
    for(int i=0;i<2;i++){
        cin>>k;
        for(int i=0;i<k;i++){
            cin>>arr[i];
        }
        res = max(res, h*(arr[k-1]-arr[0]));
    }
    for(int i=0;i<2;i++){
        cin>>k;
        for(int i=0;i<k;i++){
            cin>>arr[i];
        }
        res = max(res, w*(arr[k-1]-arr[0]));
    }
    cout<<res<<endl;
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
}