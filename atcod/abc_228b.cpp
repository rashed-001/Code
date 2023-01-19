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
    int n,x;
    cin>>n>>x;
    bool b[200005];
    for(int i=0;i<200005;i++){
        b[i]=false;
    }
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int i = x;
  do{
    b[i] = true;
    i = arr[i];
  }while(!b[i]);
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(b[i])cnt++;
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