#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 500001

//pair<ll,ll>a[5001],b[5001];
ll a[mx];
ll b[mx];
//freopen ("input.txt","r",stdin);
//freopen ("output.txt","w",stdout);
ll fix_mod(ll x, ll y)
{
    return (y + x % y) % y;
}
void solve()
{
    ll n;
    cin>>n;
    map<ll,ll>m;
    for(ll i=0; i<n; i++)
        cin>>a[i],m[a[i]]++;
    ll c=0;
    for(ll i=-100; i<=100; i++)
    {
        if(m[i]&&m[-i]&&i!=0)c+=2,m[i]=0,m[-i]=0;
         else  if(m[i]>1&&i!=0)
                c+=2;
            else if(m[i])
                ++c;

    }
    cout<<c;
    cout<<endl;
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