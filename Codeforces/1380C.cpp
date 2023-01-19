#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[100005];
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
    ll c=0;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll x1;
        cin>>x1;
        if(x1>=x)++c;
        else v.push_back(x1);
    }
    sort(v.begin(),v.end());
    n=v.size();
    //cout<<n<<endl;
    ll m=v[0];
    ll l=1;
    for(ll i=0;i<n;i++){
        ll l1=m*l;
        if(l1>=x)++c,l=1,++i,m=v[i];
        else l++;
        
    }
    cout<<c<<endl;
    


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