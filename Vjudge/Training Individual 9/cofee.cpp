#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 0x3f3f3f3f
#define N 200005
ll pref[N]={0},sum[N]={0};
ll cnt[N];
int main()
{
    ll n,k,q,g=0;
    ll maxs=-INF;
    ll mins=INF;
    cin>>n>>k>>q;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        pref[a]+=1;
        pref[b+1]+=-1;
    }
    for(int i=1;i<N;i++)
    {
        cnt[i]=cnt[i-1]+pref[i];
    }
    for(int i=0;i<N;i++)
    {
        if(cnt[i]>=k)
            cnt[i]=1;
        else
            cnt[i]=0;
    }
    for(int i=1;i<N;i++)
    {
        sum[i]=sum[i-1]+cnt[i];
    }
    for(int i=0;i<q;i++)
    {
        ll a,b;
        cin>>a>>b;
        cout<<sum[b]-sum[a-1]<<endl;
    }
    return 0;
}