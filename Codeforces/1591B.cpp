#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[200005];
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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll cnt=0;
    ll x=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>x){
            cnt++;
        x=arr[i];}
    }
    cout<<cnt<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}