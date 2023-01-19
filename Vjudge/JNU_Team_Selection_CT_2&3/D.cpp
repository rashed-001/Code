#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005];
int dp[100010];
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
bool checker(int x,int n){
    
    if(n%2==0){
        int num = n/2;
        return (x&(1ll<<num))!=0;
    }else{
        int num=n/2;
        return (x&(1ll<<num))!=0||(x&(1ll<<(num+1)))!=0;
    }
    
}
void solve()
{
    ll n;
     cin>>n;
        ll ans = 0;
        double tmp = n;
        ans = ll(sqrt(tmp)) + ll(sqrt(tmp/2));
        cout<<n-ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,k=0;
    cin>>t;
    while(t--)
    {
        cout<<"Case "<<++k<<": ";
        solve();
        cout<<endl;
    }
    return 0;
}