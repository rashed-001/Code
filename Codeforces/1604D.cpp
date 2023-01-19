#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        if(x>y)cout<<x+y<<endl;
        else{
            int xx=(y/x)*x;
            cout<<(ll) xx+(y-xx)/2<<endl;
        }
    }
    return 0;
}