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
string solution(ll n){
    string s;
    while(n){
        s+=('0'+(n%2));
        n/=2;
    }
    reverse(s.begin(),s.end());
    return s;
}
void solve()
{
    ll n;
    cin>>n;
    string s = solution(n);
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')s[i]='2';
    }
    cout<<s<<endl;
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