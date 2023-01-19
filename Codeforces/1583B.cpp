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
    int n,m;
    cin>>n>>m;
    int a,b,c;
    set<int>st;
    for(int i=0;i<m;i++){
        cin>>a>>b>>c;
        st.insert(b);
    }
    int k=1;
    for(auto it: st){
        if(k!=it){
            break;
            // k++;
        }
        k++;
    }
        for(int i=1;i<=n;i++){
            if(k!=i){
                cout<<k<<" "<<i<<endl;
            }
        }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}