#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr[200005],b[200005];
void solve()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        b[i]=arr[i];
    }
    sort(b,b+n);
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]!=b[i]){
            flag=true;
            break;
        }
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
/*Read the damn question carefully,show base case*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}