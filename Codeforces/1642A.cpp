#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[200005],b[200005];
void solve()
{
        int x1, x2, x3, x4, x5, x6;double ans = 0.0;
        cin >> x2 >> x1 >> x4 >> x3 >> x6 >> x5;
        if (x1 == x3 && x5 < x1) ans = abs(x2 - x4);
        else if (x3 == x5 && x1 < x3) ans = abs(x4 - x6);
        else if (x1 == x5 && x3 < x1) ans = abs(x2 - x6);
        cout << fixed << setprecision(7) <<ans << endl;
}
/*Read the damn question carefully,show base case*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}