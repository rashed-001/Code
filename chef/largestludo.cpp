#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        ll sz = pow(2,n);
        for(int i=0;i<sz;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int minn = *min_element(v.begin(),v.end());
        int maxx = *max_element(v.begin(),v.end());
        if(maxx-minn<=1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}