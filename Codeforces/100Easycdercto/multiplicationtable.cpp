#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005],b[100005];
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
int countDivisors(int n,int x)
{
    int cnt = 0;
    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            // If divisors are equal,
            // count only one
            if (n / i == i && i<=x)
                cnt++;
 
            else {// Otherwise count both
            if(n/i<=x&&i<=x)
                cnt = cnt + 2;
            // else cnt++;
        }
    }
}
return cnt;
}
void solve()
{
    ll n,x;
    cin>>n>>x;
    if(n>=x){
        if(isPrime(x))cout<<2<<endl;
        else{
            cout<<countDivisors(x,n)<<endl;
        }
    }
    else{
        if(isPrime(x))cout<<0<<endl;
        else{
            cout<<countDivisors(x,n)<<endl;
        }
    }

}
int main()
{
    solve();
    return 0;
}