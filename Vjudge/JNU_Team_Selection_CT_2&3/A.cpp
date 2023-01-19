#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005];
int dp[100010];
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
bool checker(int x,int n){
    
    if(n%2==0){
        int num = n/2;
        return (x&(1ll<<num))!=0;
    }else{
        int num=n/2;
        return (x&(1ll<<num))!=0||(x&(1ll<<(num+1)))!=0;
    }
    
}
void solve()
{
    int n;
    memset(dp,0,sizeof(dp));
       cin>>n;
       ll sum = 0;
        for(ll i=0;i<n;i++){
            scanf("%lld",&arr[i]);
            sum+=arr[i];
        }
        dp[0] = 1;
        for(ll i=0;i<n;i++){
            for(ll j=sum/2;j>=arr[i];j--){
                dp[j] = dp[j]|(dp[j-arr[i]]<<1);
            }
        }
        for(ll i=sum/2;i>=0;i--){
            if(checker(dp[i],n)){
               cout<<i<<" "<<sum-i;
                break;
            }
        }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,k=0;
    cin>>t;
    while(t--)
    {
        cout<<"Case "<<++k<<": ";
        solve();
        cout<<endl;
    }
    return 0;
}