#include<bits/stdc++.h>
using namespace std;
int arr[300005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int arr[4];
        cin>>arr[0]>>arr[1]>>arr[2];
         sort(arr,arr+3);
        if(arr[0]==arr[1]){
            if(arr[2]%2==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(arr[1]==arr[2]){
            if(arr[0]%2==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(arr[0]==arr[1]&&arr[1]==arr[2]&&arr[2]==arr[0]){
            if(arr[0]%2==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
        if(arr[0]+arr[1]==arr[2])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;}
    }
    return 0;
}