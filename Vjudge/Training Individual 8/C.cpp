#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll const mod = 1e12+7;
#define sz 35
ll arr[sz][sz];
ll ncr(ll n,ll r){
    if(n==r || r==0)return 1;
    else if(r==1)return n;
    else if(arr[n][r]!=(-1))return arr[n][r];
    arr[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
    return arr[n][r];
}
ll solve(ll n, ll r)
{
    ll res=0;
    ll fact[20];
    fact[0]=fact[1]=1;
    for(ll i=2;i<=20;i++){
        fact[i]=i*fact[i-1];
    }
    if(n>=r) res=ncr(n,r);
    return res*res*fact[r];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    memset(arr,-1,sizeof arr);
    cin>>test;
    for(int i=1;i<=test;i++){
        ll n,r;
        cin>>n>>r;
        cout<<"Case "<<i<<": "<<solve(n,r)<<endl;
        // i++;
    }
    return 0;
}