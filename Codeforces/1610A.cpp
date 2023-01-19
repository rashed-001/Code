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
        int n,m;
        cin>>n>>m;
        if(n==1&&m==1)cout<<0<<endl;
        else if(min(n,m)==1)cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}