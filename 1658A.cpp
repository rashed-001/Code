#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[200005],b[200005];
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            if(s[i+1]=='1'&&s[i+2]=='1')ans+=0;
            else if(s[i+1]=='1'&&s[i+2]=='0')ans+=1;
            else if(s[i+1]=='0'&&s[i+2]=='1')ans+=1;
            else ans+=2;
        }
    }
    cout<<ans<<endl;
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