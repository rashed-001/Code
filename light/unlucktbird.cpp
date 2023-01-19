#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        ld v1,v2,v3,a1,a2;
        cin>>v1>>v2>>v3>>a1>>a2;
        ld t1 = v1/a1;
        ld t2 = v2/a2;
        ld t=t1;
        if(t2>t1)t=t2;
        ld d1 = (v1*v1)/(2*a1);
        ld d2 = (v2*v2)/(2*a2);
        ld fly = t * v3;
        cout<<"Case "<<k<<": "<<fixed<<setprecision(10)<<d1+d2<<" "<<fly<<endl;
    }
    return 0;
}