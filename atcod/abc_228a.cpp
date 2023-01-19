#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005];
ll gcd(ll a, ll b)
{
    if (!a)
        return b;
    return gcd(b % a, a);
}
void solve()
{
    int s,x,t;
    cin>>s>>t>>x;
    // if(s==0)s=24;
    // else if(x==0)x=24;
    // else if(t==0)t=24;
    if(s<t){
        if(s<=x && x<t)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    else{
        if(x<t||s<=x)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}