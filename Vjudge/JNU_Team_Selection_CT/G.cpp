#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100105]; int b[100105];
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
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        b[i]=arr[i];
    }
    sort(&arr[1],&arr[n+1]);
    for(int i=1;i<=n;i++){
        b[i]=lower_bound(&arr[1],&arr[n+1],b[i])-arr;
    }int ans=0;
    for(int i=1;i<=n;i++){
        ans+=abs(b[i]-i)&1;
    }
    cout<<ans/2<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}