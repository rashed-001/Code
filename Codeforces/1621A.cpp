#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n,k;
    cin>>n>>k;
    if(k>(n+1)/2){cout<<-1<<endl;return ;}
    vector<string>s(n,string(n,'.'));
    for(int i=0;i<k;i++){
        s[2*i][2*i]='R';
    }
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}