#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// int arr[100005];
ll pref[1005][1005];
ll arr[1005][1005];
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
    long long n, q;
    cin >> n >> q;
    // initializing to 0
    for(int i = 0; i <= 1001; i++)
    {
        for(int j = 0; j <= 1001; j++)
        {
            arr[i][j] = pref[i][j] = 0;
        }
    }
    for(int i = 0; i < n; i++)
    {
        long long h, w;
        cin >> h >> w;
        arr[h][w]+=h*w;
    }
    // 2D prefix sum
    for(int i = 1; i <= 1000; i++)
    {
        for(int j = 1; j <= 1000; j++)
        {
            pref[i][j] = pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1]+arr[i][j];
        }
    }
    // query and output
    for(int i = 0; i < q; i++)
    {
        long long hs, ws, hb, wb;
        cin >> hs >> ws >> hb >> wb;
        cout << pref[hb-1][wb-1]-pref[hb-1][ws]-pref[hs][wb-1]+pref[hs][ws] << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}