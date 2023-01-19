#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<vector<bool>>arr(n+1);
    vector<int>l(n),r(n);
    for(int i=0;i<n;i++){
        cin >> l[i] >> r[i];
            arr[l[i]][r[i]] = true;
    }
    for(int i=0;i<n;i++){
        for(int j=l[i];j<=r[i];j++){
            if((j == l[i] || arr[l[i]][j - 1]) && (j == r[i] || arr[j + 1][r[i]])){
                cout<<l[i]<<" "<<r[i]<<" "<<j<<endl;
            }
        }
    }
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