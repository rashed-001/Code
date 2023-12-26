#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x0;
        cin>>x0>>n;
        ll d=0;
        if(n%4==0)d=0;
        else if(n%4==1)d=(-1)*n;
        else if(n%4==2)d=1;
        else if(n%4==3)d=n+1;
        if(x0%2==0)cout<<x0+d<<endl;
        else cout<<x0-d<<endl;
    }
    return 0;
}