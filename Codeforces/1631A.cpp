#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[10005],b[10005];
int maxi(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++){
        res=max(res,arr[i]);
    }
    return res;
}
void solve()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
       if(arr[i]>b[i]){
           swap(arr[i],b[i]);
       }
    }
    cout<<maxi(arr,n)*maxi(b,n)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
        /* code */
    }
    return 0;
}