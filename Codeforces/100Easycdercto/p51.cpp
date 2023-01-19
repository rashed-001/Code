#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[200005];
void solve()
{
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
}
sort(arr,arr+n-1);
for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<i+1<<endl;
            break;
        }
}
}

// Driver Code
int main()
{
    solve();
    return 0;
}