#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        ll a,b,c;
        cin>>a>>b>>c;
        ll sum = a+(b*2)+(c*3);
        if(sum%2==0)cout<<0<<endl;
        else cout<<1<<endl;
    }
    return 0;
}