#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]=i;
    }
     string s;
     cin>>s;
     set<int>l,dl;
     for(int i=0;i<n;i++){
         if(s[i]=='0')dl.insert(s[i]);
         else l.insert(s[i]);
     }
     vector<int>ans(n);
    int sz=dl.size();
    for(int i=1;i<=sz;i++){
        auto it = dl.begin();
        ans[arr[*it]]=i;
        dl.erase(it);
    }
    for(int i=sz+1;i<=n;i++){
        auto it = l.begin();
        ans[arr[*it]]=i;
        l.erase(it);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}