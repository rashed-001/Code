#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
typedef vector<int> vi; 
template<typename T, typename U> static void amax(T &x, U y) { if(x < y) x = y; }
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
   ll n,q;
   cin>>n>>q;
   ll arr[n+1];ll odd=0,on=0,even=0,to=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0)even++;
        else if(arr[i]%2!=0) odd++;
        else if(arr[i]==2)to++;
        else if(arr[i]==1)on++;
        
    }
    // cout<<odd<<endl;
    int cnt=0,x;
    while(q--){
        cin>>x;
        cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]==x)cnt++;
        }
        if(x==1)cout<<n<<endl;
        else if(x%2!=0&&x!=1){
            cout<<n-cnt<<endl;
        }
        else{
            cout<<odd<<endl;      
        }
        
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //  cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}