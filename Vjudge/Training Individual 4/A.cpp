#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int cnttrail(int n){
    int ans=0;
    for(ll i=5;i<=n;i*=5){
        ans+=n/i;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        int n;
        cin>>n;
        int low=1,high=1000000000;
        while(low<=high){
            int mid=(low+high)/2;
            int tmp=cnttrail(mid);
            if(tmp<n)low=mid+1;
            else high=mid-1;
        }
        int flag = cnttrail(low);
        if(flag==n){
        cout<<"Case "<<k<<": "<<low<<endl;}
        else{
             cout<<"Case "<<k<<": impossible"<<endl;
        }
    }
}