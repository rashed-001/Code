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
    if(n==2){cout<<-1<<endl;return ;}
    if(n==3){cout<<"15\n10\n6"<<endl;return ;}
    cout<<"15\n10\n6"<<endl;
    int kop=n-3;
    int temp=2;
    for(int i=1;i<=kop;i++){
        cout<<6*temp<<endl;
        temp++;
    } 
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