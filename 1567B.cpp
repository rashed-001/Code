#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        ll a, b;
        cin >> a >> b;
        ll tmp;
        if (a % 4 == 1)
        {
            tmp = a - 1;
        }
        else if (a % 4 == 2)
        {
            tmp = 1;
        }
        else if (a % 4 == 3)
        {
            tmp = a;
        }
        else
        {
            tmp = 0;
        }

        if (tmp == b)
        {
            cout << a << endl;
        }
        else if ((tmp ^ b) != a)
        {
            cout << a + 1 << endl;
        }
        else
        {
            cout << a + 2 << endl;
        }
    }
    return 0;
}