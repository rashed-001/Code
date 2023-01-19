#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
double l,n,c,S;
double func(double H){
    double r,a;
    double b=H;
    double c=l*0.5;
    r = b/2 + (c*c/(2*b));
    a = 2*asin(c/r);
    return r*a;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=1;k<=t;k++){
        scanf("%lf%lf%lf",&l,&n,&c);
        S=(1.0+(n*c))*l;
 
        double st=0.0,en=l,mid;
 
        for(int i=0; i<60; i++)
        {
            mid=(st+en)/2;
            if(func(mid)>=S) en=mid;
            else st=mid;
        }
        printf("Case %d: %.7lf\n",k,st);
    }
    return 0;
}