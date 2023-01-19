#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,ans=0;
    cin>>n;
    int d[n],a[n];
    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    sort(d,d+n);
    for(int i=0;i<n;i++){
        if(d[i]==1){
            ans++;
        }
        else break;
    }
    cout<<ans<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<d[i]<<" ";
        ans--;
        if(ans==0)break;
    }
    cout<<endl;
}
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}