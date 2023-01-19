#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[200005],b[200005];
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
    for(ll i=0;i<n;i++){
        cin>>arr[i]>>b[i];
    }
    ll cnt=0,tmp=0;
    for(ll i=n-1;i>=0;i--){
        tmp=((arr[i]+cnt))%b[i];
        if(tmp>0){
            cnt+=b[i]-tmp;
        }
    }
    cout<<cnt<<endl;
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