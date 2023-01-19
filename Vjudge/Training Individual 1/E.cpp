#include <bits/stdc++.h>
using namespace std;
int arr[10005];
void solve()
{
    int n, m, k;
    int sum = 0;
    int cnt = 0;
    cin >> n >> m >> k;
    for (int i = 0; i <= m; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            if ((arr[i] & (1 << j)) ^ (arr[m] & (1 << j)))
            {
                sum++;
            }
        }
        if (sum <= k)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
}
int main()
{
    int t = 1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    //solve();
}