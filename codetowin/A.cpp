#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005];
int main()
{
    int n,p,k;
    cin>>n>>p>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   // sort(arr,arr+n);
    ll sum=p;
    ll cnt=0;
    if(k>0){
    for(int i=0;i<n;i++){
        if(sum>arr[i]){
            sum+=arr[i];
            cnt++;
        }
        else{
            k--;
            cnt++;
        }
        if(k<=0)break;
    }
    if(cnt==n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;}
    else{
        for(int i=0;i<n;i++){
        if(sum>arr[i]){
            sum+=arr[i];
            cnt++;
        }
        else break;
    }
   if(cnt==n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}