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
    ll x1,x2,p1,p2;
    cin>>x1>>p1>>x2>>p2;
    ll mn = min(p1,p2);
    p1-=mn;
    p2-=mn;
    if(p1>=7){cout<<">"<<endl;return ;}
    if(p2>=7){cout<<"<"<<endl; return ;}
        for(int i=0;i<p1;i++){
            x1*=10;
    }
   
        for(int i=0;i<p2;i++){
            x2*=10;
        }
    if(x1>x2)cout<<">"<<endl;
    else if(x1<x2)cout<<"<"<<endl;
    else cout<<"="<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}