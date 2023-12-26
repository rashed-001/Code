#include<bits/stdc++.h>
using namespace std;
long long const mod = 1e11+7;
typedef long long ll;
ll powerMod(ll a, ll b, ll m)
{
    ll res = 1;
    a = a % m;
    while(b>0)
    {
        if(b&1)
            res = (res * a) % m;
        
        a = a * a;
        b = b >> 1;
    }
    return res;
}


int main()
{
    int n;
    cin>>n;
    ll a=powerMod(2, n, mod);
    cout<<a-n-1<<endl;    
}
