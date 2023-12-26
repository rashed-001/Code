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
    cin >> n;
    int e1=0,e2=0,o1=0,o2=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i%2==0){
            if(arr[i]%2==1)o1=1;
            else e1=1;
        }
        else{
             if(arr[i]%2==1)o2=1;
            else e2=1;
        }
    }
    if(e1&&o1)cout<<"NO"<<endl;
    else if(e2&&o2)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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