#include<bits/stdc++.h>
using namespace std;
int arr[100005];
void solve()
{
    int n;  
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    int ans=n;
    for(int i=1;i<=n;i++){
        ans=min(ans,n-i+arr[i]);
    }
    cout<<ans<<endl;
}
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
    solve();
    }
    return 0;
}