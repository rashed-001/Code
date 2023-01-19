#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[1010],cnt[1010];
const int mod = 7901;
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
    int fact[1010];
    fact[0]=1;
    for(int i=1;i<1010;i++)
       fact[i]=fact[i-1]*i%mod;
    int n;
    cin>>n;
    // int cnt[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cnt[arr[i]]++;
    }
    long long ans=1;
    for(int i=1;i<1010;i++){
        ans = ans * fact[cnt[i]]%mod;
    }
    cout<<ans<<endl;
    for(int i=0;i<n;i++){
       cnt[arr[i]]--;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
//        
solve();
}
    
    return 0;
}