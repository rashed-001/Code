#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    set<int>st;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        for(int i=l;i<=r;i++){
            st.insert(i);
        }
    }
    cout<<m-st.size()<<endl;
    for(int i=1;i<=m;i++){
        
        
    }
    cout<<endl;
    return 0;
}