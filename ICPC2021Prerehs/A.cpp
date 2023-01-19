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
void solve(ll n)
{
    // ll n;
    ll a=n%10;
    n/=10;
    n-=5*a;
    if(n%17==0)cout<<1<<endl;
    else cout<<0<<endl;

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    // cin>>t;
    while(1)
    {
        ll n;
        cin>>n;
        if(n==0)break;
        else
        solve(n);
    }
    return 0;
}