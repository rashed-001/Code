#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=10000007;
// int a, b, c, d, e, f;
// int fn(int n) {
//     if (n == 0) return a;
//     if (n == 1) return b;
//     if (n == 2) return c;
//     if (n == 3) return d;
//     if (n == 4) return e;
//     if (n == 5) return f;
//     return fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6);
// }
int main() {
    ll n, cases;
    ll arr[10005];
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &n);
        for(int i=6;i<=n;++i){
            arr[i]=(arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4]+arr[i-5]+arr[i-6])%mod;
        }
        printf("Case %d: %d\n", caseno, arr[n] % mod);
    }
    return 0;
}