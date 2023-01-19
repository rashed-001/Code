#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005];
#define ll long long
#define mx 500001

//pair<ll,ll>a[5001],b[5001];
ll a[mx];
ll b[mx];

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
    map<ll,ll>m;
    for(ll i=0; i<n; i++)
        cin>>a[i],m[a[i]]++;
    ll c=0;
    for(ll i=-100; i<=100; i++)
    {
        if(m[i]&&m[-i]&&i!=0)c+=2,m[i]=0,m[-i]=0;
         else  if(m[i]>1&&i!=0)
                c+=2;
            else if(m[i])
                ++c;

    }
    cout<<c;
    cout<<endl;

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