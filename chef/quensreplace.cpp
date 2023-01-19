#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        for(ll j=n;j>=1;j--){
            for(ll k=1;k<=n;k++){
                if(j==k&&k!=1&&k!=3){
                    cout<<"Q";
                }
                else{
                    cout<<".";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}