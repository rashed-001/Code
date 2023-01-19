#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1e12+7
int main()
{
    ll n;
    cin>>n;
    int l=0,r=0;
    ll res = INF;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0)
            res = min(res,i+(n/i)-2LL);
        }
    cout<<res<<endl;
    return 0;
}