#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1;
        map<char,int>mp;
        for(int i=0;i<26;i++){
            mp[s1[i]]=i;
        }
        cin>>s2;
        ll res=0;
        for(int i=1;i<s2.length();i++){
            res+=abs(mp[s2[i]]-mp[s2[i-1]]);
        }
        cout<<res<<endl;
    }
    return 0;
}