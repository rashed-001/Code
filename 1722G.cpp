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
    ll n;
    cin>>n;
    if(n<=3){
        cout<<"2 3 1"<<endl;
        return ;
    }
    if(n%2==1){
        cout<<"0 ";
        n--;
    }
    if((n/2)%2==1){
     cout<<"4 1 2 12 3 8 ";
        n-=6;
        bool f=false;
        for(int i=0;i<n;i+=2){
            if(!f)cout<<i+16<<" "<<i+17<<" ";
            else cout<<i+17<<" "<<i+16<<" ";
            f^=1;
        }
        cout<<endl;
        return;
 
    }
    bool f=false;
    for(int i=1;i<=n;i+=2){
        if(!f)cout<<i+1<<" "<<i+2<<" ";
        else cout<<i+2<<" "<<i+1<<" ";
        f^=1;
    }
    
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