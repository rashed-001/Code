#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = n; i >= 1; i--){
        v.push_back(i);
    }
    int cnt = 0;
    while (next_permutation(v.rbegin(), v.rend()))
    {
        if (cnt == n){
            break;
        }
        bool f = false;
        for (int i = 2; i < n; i++)
            if (v[i] == v[i - 1] + v[i - 2])
                f = true;
        if (f)
            continue;
        cnt++;
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }
}
/*Read the damn question carefully,show base case*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}