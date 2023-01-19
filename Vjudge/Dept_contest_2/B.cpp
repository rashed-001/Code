#include <bits/stdc++.h>
using namespace std;
int main()
{  
    // freopen("window.in","r",stdin);
    int x,y,t;
    long long int sum;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&x,&y);
        if((x*y)%2==0){
        printf("Hasan\n");}
        else{
            printf("Hussain\n");
        }
    }
    return 0;
}