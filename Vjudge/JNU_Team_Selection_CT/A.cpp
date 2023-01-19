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
    ll n,k;
    cin>>n>>k;
    for(ll i=1;i<=n;i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    ll ans=arr[n/2+1];
    ll low=1,high=2e9+100;
    while(low<=high){
        ll mid=(low+high)/2;
        ll res=0;
        for(ll i=n/2+1;i<=n;i++){
            if(arr[i]<mid){
                res+=mid-arr[i];
            }
        }
        if(res<=k){
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;
    }
    cout<<ans<<endl;
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