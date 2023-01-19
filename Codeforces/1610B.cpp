#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[200010];
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
int n, m, b[200010];
bool ans;
void check(int x)
{
    int m = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (arr[i] != x)
        {
            b[++m] = arr[i];
        }
        // else if()
    }
    for (int i = 1; i <= m; ++i)
    {
        if (b[i] != b[m + 1 - i])
        {
            // b[++m]=arr[i];
            return ;
        }
    }
    ans = true;
}
void solve()
{
    cin >> n,
        ans = true;
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];
    for (int i = 1; i <= n; ++i)
    {
        if (arr[i] != arr[n + 1 - i])
        {
            ans = false;
            check(arr[i]);
            check(arr[n + 1 - i]);
            break;
        }
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}