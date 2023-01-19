#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    if(s[0]==s[1]){cout<<s[0]<<s[1]<<endl;return ;}
    if(n==1){cout<<s[0]<<s[0]<<endl; return ;}
    for (int i = 0; i < s.length()-1; i++)
    {
        /* code */
        // if(s[i]==s[i+1]){cout<<s[]}
        if(s[i]>=s[i+1])cnt++;
        else break;
    }
    if(cnt==0)cout<<s[0]<<s[0]<<endl;
    else{
        for (int i = 0; i <=cnt; i++)
    {
        /* code */
        cout<<s[i];
    }
     for (int i = cnt; i >=0; i--)
    {
        /* code */
        cout<<s[i];
    }
    cout<<endl;
    }
    
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}