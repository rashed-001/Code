#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string str1,str2;
    cin>>str1>>str2;
    int ln1=str1.length();
    int ln2=str2.length();
    int p=0;
    for(int i=ln2-1;i>=0;i--){
        p++;
        if(str2[i]=='1'){
            break;
        }
    }
    int ans=0;
     for(int i=ln1-p;i>=0;i--){
        //p++;
        if(str1[i]=='1'){
            break;
        }
        ans++;
    }
    cout<<ans<<endl;
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