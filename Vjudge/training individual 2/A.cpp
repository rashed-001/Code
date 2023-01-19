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
    int n;
    cin>>n;
    ll ans=0,cnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0)cnt=1;
        else
         ans=1;
    }
    if(ans&&cnt)sort(arr,arr+n);
//    ll ans=0,cnt=0;
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;

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