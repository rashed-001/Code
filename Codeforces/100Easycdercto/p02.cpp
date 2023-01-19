#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[200005];//pref[100005];
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

// Driver Code
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
       int x;
       cin>>x;
       v.push_back(x);
    }
    // int prefixSum[n];
    int l,r;
    cin>>l>>r;
    ll sum=0;
    for(int i=l;i<=r;i++){
        sum+=v[i];
    }
    cout<<sum<<endl;
    return 0;
}