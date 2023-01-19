#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 100006
ll cnt[N], arr[N], inc[N], l[N], r[N], ans[N];
int main()
{
    ll m, n, k, x, y;
    cin >> n >> m >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> l[i] >> r[i];
        cin >> inc[i];
    }

    for (int i = 1; i <= k; i++)
    {
        cin >> x >> y;
        cnt[x]++;
        cnt[y + 1]--;
    }

    for (int i = 1; i <= m; i++)
    {
        cnt[i] += cnt[i - 1];
    }

    for (int i = 1; i <= m; i++)
    {
        ans[l[i]] += cnt[i] * inc[i];
        ans[r[i] + 1] -= cnt[i] * inc[i];
    }

    for (int i = 1; i <= n; i++)
        ans[i] += ans[i - 1];

    for (int i = 1; i <= n; i++)
        cout << ans[i] + arr[i] << " ";
    cout << endl;

    return 0;
}