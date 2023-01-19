#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int arr[1000005];
int main()
{
    /* code */
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    double sum=0;
    sort(arr,arr+n, greater<int>());
    for(int i=0;i<n;i++){
        sum+=arr[i]*arr[i]*(1-i%2*2);
    }
    cout<<fixed<<setprecision(10)<<sum*pi<<endl;
    return 0;
}
