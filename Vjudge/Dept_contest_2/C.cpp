#include<bits/stdc++.h>
typedef long long ll;
int arr[330];
using namespace std;
void solve()
{
    int n;
        memset(arr,0,sizeof(arr));
        cin>>n;
        int sum=0,cnt=0;
        while(n--)
        {
            int x,y,z;
            cin>>x>>y>>z;
            for(int i=x;i<y;i++)
            {
                if(arr[i]<z) {arr[i]=z;}
            }
        }
        for(int i=0;i<=110;i++)
            sum+=arr[i];
        cout<<sum<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
 } 