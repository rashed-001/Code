#include<bits/stdc++.h>
using namespace std;
char str[105];
int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
     int t,n,i,h,d;
    bool k;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d\n%s",&n,str);
        h = n/2;
        k = true;
        for (i=0; i<h; i++)
        {
            d = (int)(abs(str[i]-str[n-i-1]));
            if (!(d == 0 || d == 2 ))
            {
                k = false;
                break;
           }
        }
        if (k)
            cout<<"YES"<<endl;
        else  cout<<"NO"<<endl;
    }
    return 0;
}