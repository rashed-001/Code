#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[200005];
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
    int b[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        b[i]=arr[i];
    }
    sort(arr,arr+n);
    int larg=arr[n-1];
    int larg2=arr[n-2];
    for(int i=0;i<n;i++){
        if(b[i]==larg)cout<<larg-larg2<<" ";
        else cout<<b[i]-larg<<" ";
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