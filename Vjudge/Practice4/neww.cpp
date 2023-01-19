#include<bits/stdc++.h>
using namespace std;
#define     ll          long long
#define     Mx          200005
#define     endl        "\n"
#define     inf         LONG_LONG_MAX
#define     Nibir       ios_base::sync_with_stdio(false); cin.tie(NULL);
ll ar[Mx],br[Mx];
char c,ch[Mx];
ll n,m,k,i,j,x,y;
string s;
map<ll,ll>v;

ll power(ll n)
{
    ll ret=1;
    for(i=1; i<=n; i++)ret*=2;
    return ret;
}
void func()
{
    v[0]=1;

    for(i=1; i<=32; i++)
    {
        y=pow(2,i-2);
        x=v[i-1]+i*pow(2,i-1);
        v[i]=x;
    }
  //for(i=0;i<5;i++)cout<<i<<' '<<v[i]<<endl;
}

void Solve()
{
    ll a,b,cnt=0,ans=0;
    cin>>k ;
    for(i=0; i<=32; i++)
    {
        if(k<=v[i])
        {
            cout<<i<<endl;
            return;
        }
    }

}

int main()
{
    Nibir
    func();
    int tc=1;
    cin>>tc;
    while(tc--)
        Solve();
    return 0;
}