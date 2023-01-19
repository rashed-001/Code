#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    int sum = 0;
    for (int i = 0; i < (1<<n); i++) 
    {
        int mx = INT_MIN;
        int mn = INT_MAX;
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum += arr[j];
                mx = max(mx, arr[j]);
                mn = min(mn, arr[j]);
            }
        }
        if ((l <= sum && sum <= r) && (mx - mn >= x))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}