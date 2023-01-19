#include <bits/stdc++.h>
using namespace std;
typedef long ll;
ll count_zeroes(ll b)
{
    if (b < 0){
        return 0;
    }
    char s[20];
    sprintf(s, "%lld", b);
    int n = strlen(s);
    ll arr[20] = {1};
    for (int n = 1; n < 20; n++){
        arr[n] = arr[n - 1] * 10;
    }
    ll suf[20];
    suf[n] = 0;
    for (int i = n - 1; i >= 0; i--){
        suf[i] = suf[i + 1] + (s[i] - '0') * arr[n - i - 1];
    }
    ll res = 1, pref = 0;
    for (int k = 1; k < n; k++)
    {
        pref = pref * 10 + (s[k - 1] - '0');
        if (s[k] != '0'){
            res += pref * arr[n - k - 1];
        }
        else{
            res += (pref - 1) * arr[n - k - 1] + suf[k + 1] + 1;
        }
    }
    return res;
}
/*don't forget to look at the case numbers bro*/
/*read the damn question carefully now and solve that*/
/*Again scanf printf lol!*/
int main()
{
    int t;
    ll m, n;
    scanf("%d",&t);
    for (int i = 1; i <= t; i++)
    {
       scanf("%lld %lld",&m, &n);
        printf("Case %d: %lld\n", i, count_zeroes(max(m, n)) - count_zeroes(min(m, n) - 1));
    }
    return 0;
}