#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 100000

int arr[MAX + 5];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int n,q;
    for(int k=1;k<=t;k++){
        cin>>n>>q;
       for(int i=0;i<n;i++) cin>>arr[i];
       cout<<"Case "<<k<<":\n";
       while(q--)
       {
           int a,b;
           cin>>a>>b;
           int ub = upper_bound(arr,arr+n,b) - arr; /// O(log2(N))
           int lb = lower_bound(arr,arr+n,a) - arr; /// O(log2(N))
           cout<<ub-lb<<endl;
       }
        // cout<<"Case "<<k<<": "<<endl;
    }
    return 0;
}