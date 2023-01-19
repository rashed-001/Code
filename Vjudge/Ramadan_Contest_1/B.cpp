#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005];bool check[100005];
const int mod=1e9+7;
void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        check[i]=false;
    }
    int b;bool flag=false;bool var=true;
    for(int i=0;i<m;i++){
        cin>>b;
        flag=false;
        for(int j=0;j<n;j++){
        if(arr[j]==b&&check[j]==false){
            check[j]=true;
            flag=true;
            break;
        }
        }
        if(!flag){
        var=false;}
    }
    if(var)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}