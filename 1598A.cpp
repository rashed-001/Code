#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s,s1;
    cin>>s>>s1;
    bool kop = false;
    for(int i=0;i<n;i++){
        kop |= s[i] == '1' && s1[i] == '1';
    }
    if(kop)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
int main()
{
    int t=1;
    cin>>t;
 
    for(int i=1; i<=t; i++)
        solve();
    return 0;
}