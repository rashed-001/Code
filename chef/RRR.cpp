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
        ll res = (2*n-k-1)/2;
        cout<<res*2<<endl;
    }
    return 0; 
}