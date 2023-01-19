#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005];
char ch[]={'S','W'};
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
    string s;
    cin>>n;
    cin>>s;
    string res="-1";
    for(int i=0;i<2;i++) 
        for(int j=0;j<2;j++) {
            string str;
            str+=ch[i];
            str+=ch[j];
            for(int l=1;l<n;l++) {
                if(str[l]=='S') {
                    if(s[l]=='o') {
                        str+=str[l-1];
                    } else {
                        if(str[l-1]=='S') 
                            str+='W';
                        else str+='S';
                    }
                }
                else {
                    if(s[l]!='o') {
                        str+=str[l-1];
                    }
                    else {
                        if(str[l-1]=='S') str+='W';
                     else str+='S';
                 }
             }
        }
            if(str[0]!=str.back()){
                continue;
            }
            if(s[0]=='o') {
                if(str[0]=='S'&&str[n-1]!=str[1]) {
                    continue;
                    }
                if(str[0]=='W'&&str[n-1]==str[1]) {
                    continue;
                }
            }
            else {
                if(str[0]=='W'&&str[n-1]!=str[1]) {
                    continue;
                }
                if(str[0]=='S'&&str[n-1]==str[1]) {
                    continue;
                }
            }
            res=str;
        }   
    cout<<res.substr(0,n)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

   