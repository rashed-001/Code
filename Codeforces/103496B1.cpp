#include<bits/stdc++.h>
using namespace std;
int arr[300005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int arr[n+1],b[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(arr,arr+n);
    sort(b,b+n);
    int f=0;
    for(int i=0;i<n;i++){
        if(arr[i]>b[i]){
            f=1;
            break;
        }
    }
    if(f==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}