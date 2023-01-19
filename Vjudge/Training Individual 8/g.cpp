#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll const mod = 1e18 + 7;
int arr[101][101];
ll powerMod(ll a, ll b, ll m)
{
    ll res = 1;
    a = a % m;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % m;

        a = a * a;
        b = b >> 1;
    }
    return res;
}
void solve()
{
    int m, n;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            cin >> arr[i][j];
        }
    int one, zero;
    ll sum = 0;
    for (int i = 0; i < n; ++i)
    {
        one = zero = 0;
        for (int j = 0; j < m; ++j)
            if (arr[i][j])
                one++;
            else
                zero++;
        sum += powerMod(2, one, mod) - 1;
        sum += powerMod(2, zero, mod) - 1;
    }
    for (int i = 0; i < m; ++i)
    {
        one = zero = 0;
        for (int j = 0; j < n; ++j)
            if (arr[j][i])
                one++;
            else
                zero++;
        sum += powerMod(2, one, mod) - 1;
        sum += powerMod(2, zero, mod) - 1;
    }
    cout << sum - n * m << endl;
}
int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}