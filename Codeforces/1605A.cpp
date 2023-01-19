#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)%3==0)cout<<0<<endl;
        else cout<<1<<endl;
    }
    return 0;
}