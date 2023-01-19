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
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+(2*n));
    if(arr[0]==arr[(2*n)-1]){
        cout<<-1<<endl;
        return ;
    }
    for(int i=0;i<2*n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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