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
    vector<int>x(n),y(n);
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    double res=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int X=x[i]-x[j];
            int Y=y[i]-y[j];
            if(res>sqrt(X*X+Y*Y)){
                res=res;
            }
            else res=sqrt(X*X+Y*Y);
        }
    }
    cout<<fixed<<setprecision(10)<<res<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}