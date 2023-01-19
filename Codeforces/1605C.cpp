#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
        cin>>n;
        string s;
        cin>>s;
        //int len=s.size();
        int acnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a')acnt++;
        }
        if(acnt<=1){cout<<-1<<endl;return ;}
        
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}