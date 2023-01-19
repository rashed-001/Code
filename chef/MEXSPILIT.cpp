#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    int arr[n+1];
    int zero=0,others=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0)zero++;
        else others++;
    }
    cout<<max(zero,others)<<endl;
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