#include<bits/stdc++.h>
using namespace std;
int arr[1000005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int mx=arr[0];
        for(int i=0;i<n-1;i++){
            mx = max(mx,arr[i+1]-arr[i]);
        }
        cout<<mx<<endl;
    }
    return 0;
}