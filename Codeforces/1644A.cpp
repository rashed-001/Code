#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    char s[30];
    cin>>s;
    int R=0,G=0,B=0,r=0,g=0,b=0;
    int cnt[30]={0};
    for(int i=0;i<6;i++){
        if(s[i]>='a'&&s[i]<='z'){
            int val = s[i]-'a';
            cnt[val]++;
        }
        else{
            int val = s[i]-'A';
            if(cnt[val]==0){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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