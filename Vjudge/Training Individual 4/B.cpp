#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
double area(double a,double b,double c){
    double s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        double ab,ac,bc,ratio;
        cin>>ab>>ac>>bc>>ratio;
        double tot = area(ab,ac,bc);
        // cin>>n;
        double low=0,high=1;
        for(int step = 0;step<100;step++){
            double x=1.0*(low+high)/2.0;
            double axy=area(ab*x,ac*x,bc*x);
            double q = axy/(tot-axy);
            if(ratio<q)high=x;
            else low=x;
        }
        cout<<"Case "<<k<<": "<<fixed<<setprecision(8)<<low*ab<<endl;
    }
    return 0;
}