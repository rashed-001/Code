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
    ll prod=1;ll one=0,two=0,cnt=0,k=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]==1)one++;
        else two++;
    }
    if(two%2!=0&&one>0)cout<<"-1"<<endl;
    else if(one==n)cout<<1<<endl;
    else{
        if(two%2==0){
            for(int i=1;i<=n;i++){
                if(arr[i]==2)cnt++;
                if(cnt==two/2){
                    k=i;
                    break;
                }
            }
        }
        if(k>=1)cout<<k<<endl;
        else cout<<-1<<endl;
    }
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