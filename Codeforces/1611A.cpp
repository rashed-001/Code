#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005];
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
    string s;
    cin >> s;
    int cnt = 0;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '1' || s[i] == '3' || s[i] == '5' || s[i] == '7' || s[i] == '9')
            cnt++;
    }
    if (cnt == len)
    {
        cout << -1 << endl;
        return;
    }
    if (s[len - 1] == '2' || s[len - 1] == '4' || s[len - 1] == '6' || s[len - 1] == '8' || s[len - 1] == '0')
    {
        cout << 0 << endl;
    }
    else if(s[0]=='2'||s[0]=='4'||s[0]=='6'||s[0]=='8')
        cout<<'1'<<endl;
    else cout<<2<<endl;
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