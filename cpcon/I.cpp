#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[200005],n;
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
ll pre_solve(int mark)
{
    ll ans=0;
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=arr[i];
        if(mark)
        {
            if(sum<=0)
            {
                ans+=(abs(sum)+1);
                sum=1;
            }
        }
        else
        {
            if(sum>=0)
            {
                ans+=(sum+1);
                sum=-1;
            }
        }
        mark^=1;
    }
    return ans;
}
void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    ll result = min(pre_solve(0),pre_solve(1));
    cout <<result<<endl;
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
