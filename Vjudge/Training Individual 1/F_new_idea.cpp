#include<bits/stdc++.h>
using namespace std;
int arr[1001];
void solve()
{
     int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<(1<<n);i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if((1<<j)&i)
                sum+=arr[j];
            else sum-=arr[j];
        }
         if(sum%360==0){cout<<"YES"<<endl;return;}

    }
    cout<<"NO"<<endl;
}
int main()
{
   solve();
}