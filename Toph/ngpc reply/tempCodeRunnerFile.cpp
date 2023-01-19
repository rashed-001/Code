#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005];
const int mod=1e9+7;
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
int power(long long x, unsigned int y, int p)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
void solve()
{
    int n;
    cin>>n;
    ll sum=0,sum2=0;
    int b[n+2];
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){sum2+=arr[i];b[i]=arr[i];cnt++;}
        else sum+=arr[i];
    }
    sort(b,b+cnt);
    ll pp=power(2,((sum2-b[n-1])/2),mod);
    cout<<(b[n-1]*pp)+sum+cnt-1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}