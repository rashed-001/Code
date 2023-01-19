#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const double PI=acos(-1);
void solve()
{
    double w,h,a;
    double ans;
    cin>>w>>h>>a;
    double result;
    if(a>90){
        a=180-a;
    }
    a*=PI/180;
    if(fabs(a/PI*180-90)<1e-5){
        if(w>h)ans=h*h;
        else ans=w*w;
        result=ans;
    }
    else if(a>=atan(2*h/w) && w>h/sin(a)+h/tan(a)){
        ans=h*h/sin(a);
        result=ans;
    }
    else if(a>=atan(2*w/h) && h>w/sin(a)+w/tan(a)){
        ans=w*w/sin(a);
        result=ans;
    }
    else{
        ans=w*h;
        ans=(sin(a/2)*h*h - 2*cos(a/2)*h*w + sin(a/2)*w*w)/(2*cos(a/2) - 4*cos(a/2)*cos(a/2)*cos(a/2));
        result=ans;
    }
   cout<<fixed<<setprecision(9)<<result<<endl;
}
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}