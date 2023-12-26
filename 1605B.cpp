#include<bits/stdc++.h>
using namespace std;
int n;
void solve()
{
    cin>>n;
        string s,s1;
        cin>>s;
        s1=s;
        sort(s1.begin(),s1.end());
        vector<int>v;
        for(int i=0;i<n;i++){
            if(s[i]!=s1[i])
                v.push_back(i+1);
        }
        if(v.size()==0){cout<<0<<endl;return;}
            cout<<1<<endl;
            cout<<v.size()<<" ";
            for(auto it: v){
                cout<<it<<" ";
            }
            cout<<endl;
}
int main()
{
    /* code */
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
