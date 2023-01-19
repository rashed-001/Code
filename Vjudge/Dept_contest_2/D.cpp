#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005];
void solve()
{
    int n;
    cin>>n;
    memset(arr,0,sizeof(arr));
    int mx=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[x]=1;
        arr[x]=arr[x]+arr[x-1];
        if(mx<arr[x])
            mx=arr[x];
    }
    cout<<mx<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,j,arr[100],b[100],t,sum;
    cin>>t;
   while(t--)
    {
        solve();
    }

    return 0;
}