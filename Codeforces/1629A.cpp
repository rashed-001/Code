#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[105],b[105];
void solve()
{
    ll n,l;
        cin>>n;
        cin>>l;
        vector<pair<ll,ll>>v;
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
        for(int i=0;i<n;i++){
           cin>>b[i];
       }
       for(int i=0;i<n;i++){
           v.push_back({arr[i],b[i]});
       }
       sort(v.begin(),v.end());
       for(auto it:v){
           if(l<it.first)
                break;
            else l+=it.second;
       }
       cout<<l<<endl;
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