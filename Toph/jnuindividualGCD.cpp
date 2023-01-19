#include<bits/stdc++.h>
using namespace std;
int arr[1000005];
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0,ct=0;
    for(int i=0;i>n;i++){
        for(int j=0;j<n;i++){
            if(i!=j){
            if(isPrime(gcd(arr[i],arr[j]))==true)
             cnt++;
            else ct++;
        }}
    }
    cout<<cnt<<" "<<ct<<endl;
    cout<<abs(cnt-ct)<<endl;
}