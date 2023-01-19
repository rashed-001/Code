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
void solve()
{
    int n,s;
    cin>>n>>s;
    int x,y,k;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>x>>y>>k;
        mp[x*x+y*y]+=k;
    }
    map<int,int> :: iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        s+=it->second;
        if(s>=1000000){
            cout<<setprecision(9)<<(double) sqrt(it->first)<<endl;
            return ;
        }
    }
    cout<<-1<<endl;
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