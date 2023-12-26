#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[200005],b[200005];
void solve()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(n==1){
        if(arr[0]>1)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        return;
    }
    if(arr[n-2]+1<arr[n-1])cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
/*Read the damn question carefully,show base case*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}