#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5 + 10;
int arr[505][505];
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
    int n, k;
    cin>>n>>k;
    int temp_cnt = n * n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= k; j--)
        {
            arr[i][j] = temp_cnt--;
        }
    }
    for (int i = 1; i <= n; i++){
        for (int j = k - 1; j >= 1; j--){
            arr[i][j] = temp_cnt--;
        }
    }
    int total = 0;
    for (int i = 1; i <= n; i++){
        total += arr[i][k];
    }
    cout<<total<<endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++){
           cout<< (j > 1 ? " " : "")<< arr[i][j];
         }
       cout<<endl;
    }
}
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}