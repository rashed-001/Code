#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[1000005];
int findSplitPoint(int arr[], int n)
{
    // traverse array element and compute sum
    // of whole array
    int leftSum = 0;
    for (int i = 0 ; i < n ; i++)
        leftSum += arr[i];
 
    // again traverse array and compute right sum
    // and also check left_sum equal to right
    // sum or not
    int rightSum = 0;
    for (int i=n-1; i >= 0; i--)
    {
        // add current element to right_sum
        rightSum += arr[i];
 
        // exclude current element to the left_sum
        leftSum -=  arr[i] ;
 
        if (rightSum == leftSum)
            return i ;
    }
 
    // if it is not possible to split array
    // into two parts.
    return -1;
}
int main()
{
    int n;
    cin>>n;
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    bool flag=0;
    sort(arr,arr+n);
    if(sum%360==0)cout<<"YES"<<endl;
    else if(sum>360) {
        int kop=sum%360;
        for(int i=0;i<n;i++){
            if(arr[i]==kop/2){
                flag=true;break;}
        }
         if(flag)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   
    }
    else{
        int tt = findSplitPoint(arr,n);
        if(tt==-1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    } 
    return 0;
}