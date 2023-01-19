#include<bits/stdc++.h>
using namespace std;
int arr[550][550];
int temp[550];
void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
        }
    }
    int ans=0;
    bool flag=true;
    for(int i=1;i<=n;i++){
        ans ^= arr[i][1];
    }
    if(ans){
        cout<<"TAK"<<endl;
        for(int i=1;i<=n;i++){
            cout<<"1 ";
        }
        cout<<endl;
    }
    else{
        int pos=-1;
        int tmp=0;
        for(int i=1;i<=n;i++){
            int k=0;
            for(int j=2;j<=m;j++){
                if(arr[i][j]!=arr[i][1]){
                    pos=i;
                    tmp=j;
                    k=1;
                    break;
                }
            }
            if(k){
                break;
            }
        }
        if(pos==-1){
            cout<<"NIE"<<endl;
        }
        else{
            cout<<"TAK"<<endl;
            for(int i=1;i<=n;i++){
                if(pos==i){
                    cout<<tmp<<" ";
                }
                else{
                    cout<<"1 ";
                }
            }
            cout<<endl;
        }
    }
}
int main()
{
    int t=1;
    // cin>>t'
    while (t--)
    {
        /* code */
        solve();
    }
    
}