#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr[200005];
void solve()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    int l=arr[0];
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            //l=arr[i];
            cnt++;
        }
    }
    if(arr[0]==arr[1]){
    cout<<cnt+1<<endl;}
    else cout<<cnt<<endl;
}
/*Read the damn question carefully,show base case*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    // cin>>t;
    while(t--)
        solve();
    return 0;

}
