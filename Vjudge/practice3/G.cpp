#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
       ll n,k;
    cin>>n>>k;
    ll a=n;
    ll b=n;
    while(true){
        a-=1;
        if(a<=0){cout<<"freesin"<<endl;break;}
        b-=k;
        if(b<=0){cout<<"pllj"<<endl;break;}
        b-=1;
        if(b<=0){cout<<"pllj"<<endl;break;}
        a-=k;
        {cout<<"freesin"<<endl;break;}
    }
    }
    return 0;
}