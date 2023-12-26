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
    string s[3][n];
    map<string,int>mp;
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            cin>>s[i][j];
            mp[s[i][j]]++;
        }
    }
    int person=0;
    for(int i=0;i<3;i++){
        person=0;
        for(int j=0;j<n;j++){
            if(mp[s[i][j]]==1)person+=3;
            else if(mp[s[i][j]]==2)person+=1;
        }
        cout<<person<<" ";
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