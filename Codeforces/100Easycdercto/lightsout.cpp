#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[105][105], b[105][105];
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
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    memset(b, 0, sizeof(b));
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j])
            {
                b[i][j] += arr[i][j];
                if (i > 0)
                    b[i - 1][j] += arr[i][j];
                if (i < 2)
                    b[i + 1][j] += arr[i][j];
                if (j > 0)
                    b[i][j - 1] += arr[i][j];
                if (j < 2)
                    b[i][j + 1] += arr[i][j];
            }
        }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", b[i][j] & 1 ^ 1);
        }
        printf("\n");
    }
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