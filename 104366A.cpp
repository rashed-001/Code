#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    ll arr[n+5];
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
        
    }
    sort(arr,arr+n);
    ll k=0;
    if(arr[n-1]==arr[1]||arr[1]==arr[0])k=arr[0];
    
    else {
        if(arr[1]-arr[0]>=arr[n-1]-arr[1])k=arr[0]+(arr[n-1]-arr[1]);
        else k=arr[0]+(arr[1]-arr[0]);
    }
    double p = k;
    cout<<fixed<<setprecision(1)<<p<<endl;
}
int main()
{
    solve();
    return 0;
}