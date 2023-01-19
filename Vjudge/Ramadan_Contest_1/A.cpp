#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005];
const int mod=1e9+7;
void solve()
{
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int l=arr[0];
    int k=arr[l];
    int p=arr[k];
    int q=arr[p];
    cout<<p<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}