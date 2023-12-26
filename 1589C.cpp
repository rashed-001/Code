#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[500],b[500];
void solve()
{
    int n,i,j;
    cin>>n;
    // multiset<int>s;
    map<int,int>mp;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
        mp[b[i]]++;
    }
    sort(arr,arr+n);
    for(i=0;i<n;i++){
        if(mp[arr[i]]>0){
            mp[arr[i]]--;
        }
        else if(mp[arr[i]+1]>0){
            mp[arr[i]+1]--;
        }
        else {cout<<"NO"<<endl;
        return;}
    }
    cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    /* code */
    solve();}
    return 0;
}
