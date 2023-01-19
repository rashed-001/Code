#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005],b[100005];
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
    ll mn=0;
    // if(isPrime(n)){cout<<2*(1+n)<<endl;return ;}
    for(ll i=sqrt(n);i>=1;i--){
        if(n%i==0){
            mn=(i+(n/i));
            break;
        }
    }
    cout<<2*mn<<endl;
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