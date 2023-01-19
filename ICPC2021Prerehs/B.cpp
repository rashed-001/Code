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
    
    ll n;
    cin>>n;
    ll a,b,sum=0,a1,b1,sum2=0;
    // cin>>a1>>b1;
    // sum2+=(a1-b1);
    ll k=n-1;
    while(k--){

        cin>>a>>b;
        sum2+=(a-b);
        sum=max(sum,sum2);

    }  
    cout<<sum<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<": ";
       solve();
    }
    return 0;
}