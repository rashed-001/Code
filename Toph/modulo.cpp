#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    ll t;
    cin>>t;
    ll tt=0;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        ll q;
        cin>>q;
        ll b[q];
        bool flag=true;
        for(ll i=0;i<q;i++){
            cin>>b[i];
            if(b[i]==1){
                flag = false;
            }
        }
        cout<<"Case "<<++tt<<":"<<endl;
        if(!flag){
            for(ll i=0;i<n;i++){
                if(i!=(n-1))
                    cout<<0<<" ";
                else cout<<0<<endl;
            }
        }
        else{
            ll temp = INFINITY;
            for(ll i=0;i<q;i++){
                if(temp>b[i]){
                    for(ll j=0;j<n;j++){
                        arr[j]%=b[i];}
                    temp=min(temp,b[i]);
                }
            }
            for(ll i=0;i<n;i++){
                if(i!=(n-1)){
                    cout<<arr[i]<<" ";
                }
                else cout<<arr[i]<<endl;
            }

        }
    }
    return 0;
}