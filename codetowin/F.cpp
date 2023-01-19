#include <iostream>
using namespace std;
typedef long long ll;
// Recursive function to return gcd of a and b
ll gcd(ll a, ll b)
{
    if (!a)
        return b;
    return gcd(b % a, a);
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        ll a,b,m;
        cin>>a>>b>>m;
        cout<<gcd((a-m),(b-m))<<endl;
    }
    return 0;
}