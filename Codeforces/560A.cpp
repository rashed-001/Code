#include<bits/stdc++.h>
using namespace std;
int arr[1000005];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(arr[0]==1)cout<<-1<<endl;
    else cout<<1<<endl;
    return 0;
}