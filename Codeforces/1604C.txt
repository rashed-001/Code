#include <bits/stdc++.h>
using namespace std;
int arr[2000005];
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        bool ok = true;
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            bool found = false;
            for (int j = i + 1; j >= 2; j--)
            {
                if (x % j)
                {
                    found = true;
                    break;
                }
            }
            ok &= found;
        }
        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}