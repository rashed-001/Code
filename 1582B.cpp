#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[1000005];
const int mod = 1e9+7;
int power(long long x, unsigned int y, int p)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n;
        ll sum=0,one=0,zero=0;
        for(int i=0;i<n;i++){
           cin>>x;
            if(x==1)one++;
            else if(x==0)zero++;
        }
     cout<<(1ll<<zero)*(ll)one<<endl;
    }
    return 0;
}