#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005], b[100005];
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
void solve()
{
    int mx = INT_MIN;
    int n;
    cin >> n;
    memset(b, 0, sizeof(b));
    for (int i = 1; i <= 4 * n; i++)
    {
        cin >> arr[i];
        b[arr[i]]++;
    }
    int m = 0, flag = 0;
    sort(arr, arr + 4 * n + 1);
    mx = arr[1] * arr[4 * n];
    if (n == 1 && b[arr[1]] == 4)
    {
        cout << "YES" << endl;
        return;
    }
    for (int i = 1; i <= 4 * n - 1; i++)
    {
        if (arr[i] != arr[i + 1] || arr[i] * arr[4 * n - i + 1] != mx)
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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