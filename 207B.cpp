#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
// ll power(ll x, ll y, ll p)
// {
//     ll res = 1;     // Initialize result
 
//     x = x % p; // Update x if it is more than or
//                 // equal to p
  
//     if (x == 0) return 0; // In case x is divisible by p;
 
//     while (y > 0)
//     {
//         // If y is odd, multiply x with result
//         if (y & 1)
//             res = (res*x) % p;
 
//         // y must be even now
//         y = y>>1; // y = y/2
//         x = (x*x) % p;
//     }
//     return res;
// }
int main()
{
    // int t=1;
    // // cin>>t;
    // while(t--){
    double r;
    cin>>r;
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    double dis = sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    double res = ceil(dis/(2*r));
    cout<<res<<endl;
// }
    return 0;
}
