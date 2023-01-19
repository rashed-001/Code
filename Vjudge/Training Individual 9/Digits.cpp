#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1000001;
double lg[N];
void pre()
{

    lg[0]=0;
    for(int i=1;i<=N;i++){
        lg[i]=lg[i-1]+log10(i);
    }
}
int main()
{
    pre();
    ll t;
    cin>>t;
    for(int i=1;i<=t;i++){
        ll n,base;
        cin>>n>>base;
        ll ans=(lg[n]/log10(base));
        cout<<"Case "<<i<<": "<<ans+1<<endl;
    }
    return 0;
}