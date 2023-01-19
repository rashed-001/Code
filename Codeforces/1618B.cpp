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
   vector<string>v(n-2);
   for(int i=0;i<n-2;i++){
       cin>>v[i];
   }
   string ans = "";
   ans = ans+v[0][0];
   int flag=0;
   for(int i=1;i<n-2;i++){
       if(v[i][0]!=v[i-1][1]){
           flag = 1;
           ans = ans + v[i-1][1];
       }
       ans = ans + v[i][0];
   }
   ans = ans +v[n-3][1];
   if(flag==0)ans+='b';
   cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}