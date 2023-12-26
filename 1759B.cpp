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
    ll m,s;
    cin>>m>>s;
    ll sum=0;
    for(int i=0;i<m;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    bool flag=false;
    ll res=sum+s;ll ans=0;
    for(int i=1;;i++){
        ans+=i;
        if(ans==res){
            flag=true;break;
        }
        else if(ans>res)break;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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