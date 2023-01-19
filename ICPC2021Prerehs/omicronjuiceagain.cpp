#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 200000

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

    ll a,b,c,k;
    cin>>a>>b>>c>>k;
    // a-=k;b-=k;c-=k;
    bool flag=false;
    ll sum=0;
    sum=a+b+c;
    if(sum%3!=0)
    {
        cout<<"Fight"<<endl;
    }
    else
    {
        ll l=sum/3;
        ll a1=abs(l-a);
        ll b1=abs(l-b);
        ll c1=abs(l-c);
        ll f=0;
        if(a1%k||b1%k||c1%k)
        {

            cout<<"Fight"<<endl;

        }
        else cout<<"Peaceful"<<endl;


    }

}
/*Read the damn question carefully,show base case*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    //
    cin>>t;
    for(ll i=1; i<=t; i++)
    {
        cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}