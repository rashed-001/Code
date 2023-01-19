#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005];
int tree[400005];
int init(int left, int right, int node)
{
    int a, b;
    if (left == right)
    {
        tree[node] = arr[left];
        return arr[left];
    }
    int mid = (left + right) / 2;
    int mid1 = (left + right) / 2 + 1;
    a = init(left, mid, node * 2);
    b = init(mid1, right, node * 2 + 1);
    tree[node] = min(a, b);
    return tree[node];
}
int query(int left, int right, int st, int en, int node)
{
    int res1, res2;
    if (st <= left && en >= right)
    {
        return tree[node];
    }
    if (st > right || en < left)
    {
        return INT_MAX;
    }
    int l = node * 2;
    int r = node * 2 + 1;
    int mid = (left + right) / 2;
    int mid1 = (left + right) / 2 + 1;
    res1 = query(left, mid, st, en, l);
    res2 = query(mid1, right, st, en, r);
    return min(res1, res2);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        int n, q;
        cin >> n >> q;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        init(1,n,1);
        int l, r;
        cout << "Case " << k << ":\n";
        while(q--)
        {
            cin >> l >> r;
            cout << query(1, n, l, r, 1) << endl;
        }
    }
    return 0;
}