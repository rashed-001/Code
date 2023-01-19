#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[++n]={0};
    for(int i=1;i<n;i++){
        int in;
        cin>>in;
        arr[i]=in+arr[i-1];

    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        cout<<arr[r+1]-arr[l]<<endl;
    }
}