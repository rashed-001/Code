#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[500005];
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
    ll n;
    cin>>n;
    for(int i=1;i<=n*3;i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+n*3+1);
    ll sum=0;
    for(int i=n+1;i<=n*3;i+=2){
        sum+=arr[i];
    }
    cout<<sum<<endl;
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