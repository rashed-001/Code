#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// int arr[100005];
ll gcd(ll a, ll b)
{
    if (!a)
        return b;
    return gcd(b % a, a);
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}
void solve()
{
    ll n,q;
    cin>>n>>q;
    ll ar[n+4];
    map<ll,ll>mp;
    ll sum=0;
    for(ll i=1;i<=n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    ll up=-1;
    while(q--)
    {
        ll a;
        cin>>a;
        if(a==1)
        {
            ll pos,x;
            cin>>pos>>x;
            if(up==-1)
            {
                if(x>=ar[pos])sum+=(x-ar[pos]);
                else sum-=(ar[pos]-x);
                ar[pos]=x;
                cout<<sum<<endl;
            }
            else
            {
                ll temp;
                if(mp[pos]==0)temp=up;
                else temp=mp[pos];
                if(x>=temp)sum+=x-temp;
                else sum-=temp-x;
                cout<<sum<<endl;
                mp[pos]=x;
            }
        }
        else
        {
            ll x;
            cin>>x;
            cout<<x*n<<endl;
            sum=x*n;
            mp.clear();
            up=x;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}