#include <bits/stdc++.h>
using namespace std;
int main()
{  
    freopen("window.in","r",stdin);
    int x,y,t;
    long long int sum;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&x,&y);
        sum=(long long int)x*y;
        printf("%lld\n",sum);
    }
    return 0;
}