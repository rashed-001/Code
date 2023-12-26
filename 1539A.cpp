#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        ll n,x,t;
        cin>>n>>x>>t;
        ll temp = t/x;
        if(temp>n){
            cout<<n*(n-1)/2<<endl;
        }
        else{
            ll res=temp*n;
            res -= temp*(temp+1)/2;
            cout<<res<<endl;
        }
    }
    return 0;
}