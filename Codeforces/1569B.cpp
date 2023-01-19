#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        vector<int> v;
        for (int i = 0; i < n; ++i)
            if (s[i] == '2')
                v.push_back(i);
        int sz = v.size();
        if (sz == 1 || sz == 2)
        {
            cout << "NO" << endl;
            continue;
        }
        vector<string> st(n, string(n, '='));
        for (int i = 0; i < n; ++i)
            st[i][i] = 'X';
        for (int i = 0; i < sz; ++i)
        {
            int x = v[i], y = v[(i + 1) % sz];
            st[x][y] = '+';
            st[y][x] = '-';
        }
        cout << "YES" << endl;
        for (int i = 0; i < n; ++i)
            cout << st[i] << endl;
    }
    return 0;
}