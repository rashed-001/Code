#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Case #"<<k<<": ";
    sort(arr.begin(),arr.end());
    int res=1;
    for(auto it:arr){
        if(it>=res){
            res+=1;
        }
    }
    res-=1;
    cout<<res<<endl;
    }
    return 0;
}