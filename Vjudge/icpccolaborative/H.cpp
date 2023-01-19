#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    map<ll,ll>m;
    for(ll i=20,j=10;i<=200;i+=20,j--)m[i]=j;
    ll n;
    cin>>n;
    ll c=0;
    while (n--)
    {
        ll x,y;
        cin>>x>>y;
        double d=sqrt(x*x+y*y);
        if(d<=20)c+=10;
        else if(d>20&&d<=40)c+=9;
        else if(d>40&&d<=60)c+=8;
        else if(d>60&&d<=80)c+=7;
        else if(d>80&&d<=100)c+=6;
        else if(d>100&&d<=120)c+=5;
        else if(d>120&&d<=140)c+=4;
        else if(d>140&&d<=160)c+=3;
        else if(d>160&&d<=180)c+=2;
        else if(d>180&&d<=200)c+=1;
        else c+=0;
    }
    cout<<c<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}