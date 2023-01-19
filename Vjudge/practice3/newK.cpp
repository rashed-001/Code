#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, arr[100050];
    cin >> n;
    memset(arr, 0, sizeof(arr));
    for (int i = 1; i <= n; i++)
    {
        int x1 , y1 , x2 , y2;
        cin >> x1 >> y1 >> x2 >> y2;
        arr[x1]++;
        arr[x2]--;
    }
    int cnt = 0, ans = 0;
    for (int i = 0; i <= 100000; i++)
    {
        cnt += arr[i];
        if (cnt > 0)
        {
            ans++;
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}