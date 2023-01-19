#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// void solve()
// {

// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,j,arr[100],b[100],t,sum;
    cin>>t;
   while(t--)
    {
        memset(arr,0,sizeof(arr));
        memset(b,0,sizeof(b));
        j=sum=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        b[j++]=arr[0];
        for(i=1;i<n;i++)
        {
            b[i]=arr[i]+b[i-1];
            if(b[i]>300)
                break;
        }
        for(j=0;j<i;j++)
        {
            sum+=b[j];
        }
        cout<<i<<" "<<sum<<endl;
    }

    return 0;
}