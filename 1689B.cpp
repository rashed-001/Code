#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[50005],b[5005];
void solve()
{
     ll n;
        cin>>n;
        int c[n+5];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            b[i]=arr[i];
        }
        if(n==1){cout<<-1<<endl;return ;}
    sort(arr,arr+n);
    //if(arr[n-1]==b[n-1]){swap(arr[n-2],arr[n-1]);}
   // else{
    if(n==3){
        cout<<arr[1]<<" "<<arr[2]<<" "<<arr[0]<<endl;
        return;
    }
        for(int i=0;i<n;i++){

            if(arr[i]==b[i]){
                if(i==n-1){
                    swap(arr[n-2],arr[n-1]); 
                    break;
                }else{
                swap(arr[i],arr[i+1]);
                break;}
            }
           // else c[i]=arr[i];
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        
        cout<<endl;//}
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}