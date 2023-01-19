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
   vector<ll>arr(n+1);
   ll x=0,y=0;
   for(int i=1;i<=n;i++){
       cin>>arr[i];
    if(i%2)x=gcd(x,arr[i]);
    else y=gcd(y,arr[i]);
   }
   int flag=0;
   for(int i=2;i<=n;i+=2){
       if(arr[i]%x==0){
           flag=1;
           break;
       }
   }
   if(flag==0){
       cout<<x<<endl;
       return;
   }
    int flag1=0;
    for(int i=1;i<=n;i+=2){
       if(arr[i]%y==0){
           flag1=1;
           break;
       }
   }
   if(flag1==0){
       cout<<y<<endl;
       return;
   }
    cout<<0<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}