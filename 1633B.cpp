#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string s;
    cin>>s;
    int n=s.length();
    int one=0,zero=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1')one++;
        // else one++;
    }
    zero=n-one;
    // if(s.length()==1)cout<<0<<endl;
    // if(one==zero)cout<<0<<endl;
    if(zero!=one) cout<<min(one,zero)<<endl;
    else cout<<one-1<<endl;
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