#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        set<int>s;
        ll u=sqrt(n);
	for(ll i=1;i<=u+1;i++)
    {
        if(i*i<=n){
           s.insert(i*i);
        }
        if(i*i*i<=n){
           s.insert(i*i*i);  
        }
    }
    cout<<s.size()<<endl;}
	return 0;
}
