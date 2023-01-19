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
    int n,k;
    cin>>n>>k;
    k-=1;
    int arr[n+1],b[n+1];
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        arr[i]=a+b+c;
    }
    for(int i=0;i<n;i++){
        b[i]=arr[i];
    }
    sort(b,b+n,greater<int>());
    for(int i=0;i<n;i++){
        if(arr[i]+300>=b[k]){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
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