#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// int arr[200005],b[200005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        vector<int>arr(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            // b[i]=arr[i];
        }
        vector<int>b=arr;
        reverse(b.begin()+1,b.end());
        int res=0,x=1;
        while (x<n)
        {
            /* code */
            if(b[x+1]==b[1]){ 
                x++;
                continue;
            }
            res++;
            x*=2;
        }
        cout<<res<<endl;
    }
    return 0;
}