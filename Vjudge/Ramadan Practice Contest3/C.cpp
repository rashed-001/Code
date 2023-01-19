#include<bits/stdc++.h>
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
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (auto& it : a) {
        cin >> it;
        it -= 1;
    }
    for (auto& it : b) {
        cin >> it;
        it -= 1;
    }
    for (auto& it : c) {
        cin >> it;
        it -= 1;
    }
    vector<int> cnt(n);
    for (int i = 0; i < n; ++i) {
        cnt[b[c[i]]] += 1;
    }
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += cnt[a[i]];
    }
    cout << ans << '\n';

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}