#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x0, y0, dx1, dy1, dx2, dy2;
    int  arr[1000][2];
    cin >> n >> x0 >> y0;
    bool flag[1000];

    for (int i = 0; i < n; i++) cin >> arr[i][0] >> arr[i][1];
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if (flag[i]) continue;
        ans++;
        int dis1 = arr[i][0] - x0;
        int  dis2 = arr[i][1] - y0;
        for (int j = 0; j < n; j++)
        {
           int diss3 = arr[j][0] - x0, diss4 = arr[j][1] - y0;
            if (diss3 * dis2 == dis1 * diss4) flag[j] = 1;
        }
    }
cout<<ans<<endl;
return 0;
}