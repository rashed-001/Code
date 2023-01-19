#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (a <= n / 2 && b <= n / 2)
    {
        cout << -1 << endl;
    }
    else if (a > n / 2 && b > n / 2)
    {
        cout << -1 << endl;
    }
    else if (a > (n / 2) + 1)
    {
        cout << -1 << endl;
    }
    else if (b < (n / 2))
    {
        cout << -1 << endl;
    }
    else
    {
        vector<int> v;
        v.push_back(a);
        int l = n;
        int temp = (n / 2) - 1;
        while (temp)
        {
            if (l != b)
            {
                v.push_back(l);
                temp--;
            }
            l--;
        }
        v.push_back(b);
        int tmp = (n / 2) - 1;
        int r = 1;
        while (tmp)
        {
            if (r != a)
            {
                v.push_back(r);
                tmp--;
            }
            r++;
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
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