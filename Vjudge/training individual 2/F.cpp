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
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(arr[n-3]+arr[n-2]<=arr[n-1]){cout<<"NO"<<endl;return ;}
    cout<<"YES"<<endl<<arr[n-1]<<" ";
    for(int i=n-3;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<arr[n-2]<<endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}