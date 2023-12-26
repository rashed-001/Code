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
    string s;
    cin>>s;
    int n=s.length();
    string s2;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a')cnt++;
        else s2[i]=s[i];
    }
    int ct = s2.length();
    if(ct%2!=0)cout<<":("<<endl;
    else{
        string tmp,tmp2;
        for(int i=0;i<ct/2;i++){
            tmp[i]=s2[i];
        }
        for(int i=ct/2;i<ct;i++){
            tmp2=s2[i];
        }
        if(tmp!=tmp2)cout<<":("<<endl;
        else{
            for(int i=0;i<n-(ct/2);i++){
                cout<<s[i];
            }
        }
    }
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