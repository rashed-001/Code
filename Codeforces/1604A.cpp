#include<bits/stdc++.h>
using namespace std;

int arr[1000005];
void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int mx=0;
    for(int i=1;i<=n;i++){
        mx=max(mx,(arr[i]-i));
    }
    cout<<mx<<endl;
}
int main()
{
    /* code */
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
