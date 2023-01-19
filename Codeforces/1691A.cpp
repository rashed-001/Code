#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int arr[n+1];
        int odd=0,even=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0)even++;
            else odd++;
        }
        cout<<min(odd,even)<<endl;
    }
    return 0;
}