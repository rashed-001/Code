#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        cout<<n*2<<" "<<(n*k)*(n*k-1)<<endl;
    }
    return 0;
}