#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[200005];
 map<int,int>mp;
// void solve()
// {
//     ll n,x;
//     cin>>n>>x;

//     map<ll,ll>mp;
//     for(int i=1;i<=n;i++){
//         cin>>arr[i];
//     }
//     int cnt=0;
//     for(int i=1;i<=n;i++){
//        if(mp[arr[i]^x])
//             cnt+=mp[arr[i]^x];
//         mp[arr[i]]++;
//     }
//     cout<<cnt<<endl;
// }
int main()
{
    int n,x;
     scanf("%d%d",&n,&x);
    for(int i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    long long ans = 0;
    for(int i=1;i<=n;i++)
    {
        if (mp[arr[i]^x])
            ans+=mp[arr[i]^x];
        mp[arr[i]]++;
    }
    cout << ans << endl;
}