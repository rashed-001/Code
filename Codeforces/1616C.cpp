#include<bits/stdc++.h>
#define ll long long
#define lld long double
using namespace std;
template<class T>
inline bool mnto(T& a, T b) {return a > b ? a = b, 1 : 0;}
void solve()
{
    ll n;
    cin>>n;
    vector<lld>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int cnt=0;
    int ans=n-1;
    if(n<=2){cout<<0<<endl;return;}
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int diff = arr[j] - arr[i];
				int res = 0;
				for (int k=0;k<n;k++) {
					if (k == i || k == j) {
						continue;
					}
					// diff / (j - i) * (k - i) + a[i]
					if (diff * (k - i) % (j - i) != 0) {
						res++;
					} else if (diff * (k - i) / (j - i) + arr[i] != arr[k]) {
						res++;
					}
				}
				mnto(ans, res);
        }
    }
    cout<<ans<<endl;
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