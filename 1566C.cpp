#include<bits/stdc++.h>
using namespace std;
int solve(string s) {
    int res=0;
     for(int i=0;i<s.size();i++){
            if(s[i]=='0')res++;
        }
    int ans = res;
    int n = s.size();
    bool one = false, zero = false;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') one = true;
        if (s[i] == '1') zero = true;
        if (one && zero) {
            ++ans;
            one = zero = false;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, ans = 0;
        string a, b;
        cin >> n;
        cin >> a;
        cin >> b;
        string st = "";
        for (int i = 0; i < n; ++i) {
            if (a[i] != b[i]) {
                ans += 2 + solve(st);
                st = "";
            } else {
                st += a[i];
            }
        }
        cout << ans + solve(st) << endl;
    }
    return 0;
}