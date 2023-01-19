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

void solve(double l, double w)
{
    
   l=(l/2*1.0)+(l/4*1.0);
   double k=l;
    double tmp=sqrt(((k*k)-((l-k)*(l-k))));
    cout<<fixed<<setprecision(4)<<k+k+(w-tmp)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    // cin>>t;
    while(1)
    {
        double a,b;
        cin>>a>>b;
        if(a==0&&b==0)break;
        else
        solve(a,b);
    }
    return 0;
}