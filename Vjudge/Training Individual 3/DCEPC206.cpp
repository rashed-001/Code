#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxx = 100009;
ll bit[maxx];
ll arr[maxx],b[maxx], n;
void update(int idx , int val)
{
    while(idx<=n)
    {
        bit[idx] += val;
        idx +=(idx & -idx);
    }
}
ll query(int idx)
{
    ll res = 0;
    while(idx)
    {
        res += bit[idx];
        idx -= (idx & -idx);
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cin>>n;
        for(int i = 0; i < n ; i++){
            cin>>arr[i];
            b[i] = arr[i];
        }
        sort(arr,arr+n);
        for(int i = 0; i < n ; i++)
        {
            int temp = lower_bound(arr , arr + n , b[i]) - arr;
            b[i] = temp;
        }
        ll sum = 0;
        memset(bit, 0 , sizeof(bit));
        for(int i = 0; i < n ; i++)
        {
            sum += query(b[i]);
            update(b[i] + 1 , arr[b[i]]);
        }
      cout<<sum<<endl;
    }
    return 0;
}