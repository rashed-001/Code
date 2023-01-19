#include<bits/stdc++.h>
using namespace std;
int arr[2000005],b[2000005];
int main()
{
    int n;
    cin>>n;
    int minus=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){
            b[i]=(-1)*arr[i];
            minus++;
        }
    }
    int sum = 0;
    sort(arr,arr+n-minus,greater<int>());
    sort(b,b+minus,greater<int>());
   for(int i=0;i<n/2;i++){
       sum+=arr[i];
   }
   for(int i=0;i<n/2;i++){
       if(minus==0)break;
       sum+=b[i];
        minus--;
   }
   //if(minus>n/2){
   for(int i=n/2;i<n-minus;i++){
       sum-=arr[i];
   }
   for(int i=minus;i<n-minus;i++){
       sum-=b[i];
   }
    cout<<sum<<endl;
}