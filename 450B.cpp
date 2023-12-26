#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main()
{

    long long x,y;
    cin>>x>>y;
    long long n;
    cin>>n;
    int arr[7];
    arr[1]=(x+mod)%mod;
    arr[2]=(y+mod)%mod;
    arr[3]=((y-x)+mod)%mod;
    arr[4]=((-x)+mod)%mod;
    arr[5]=(-y+mod)%mod;
    arr[6]=((x-y)+mod)%mod;
    if(n<6)cout<<(arr[n]+mod)%mod<<endl;
    else{
        int rem=n%6;
        if(rem==0)cout<<(arr[6]+mod)%mod<<endl;
        else cout<<(arr[rem]+mod)%mod;
    }
    return 0;
}