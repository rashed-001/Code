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
    if(n==3 && arr[1]%2==1){
        cout<<"NO"<<endl;
        return ;
    }
    if(b[n-1]==1){
        cout<<"NO"<<endl;
        return;
    }
    int res=0;
    for(int i=0;i<n;i++){
       res+=(arr[i]+1)/2;
        }
    }
    cout<<res<<endl;
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