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
    int r,c;
    cin>>r>>c;
    int a=abs(r);
    int b=abs(c);
    if(abs(a-b)<=1)cout<<a+b<<endl;
    else if(a==0||b==0)cout<<a+b+(abs(a-b)-1)<<endl;
    else {
        if(abs(a-b)%2==0)cout<<a+b+(abs(a-b)/2)<<endl;
        else cout<<a+b+(abs(a-b)/2)+1<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}