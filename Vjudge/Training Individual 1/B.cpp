#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll odd=0,even=0;
    if(n%2==0){
        even=n/2;
        odd=n/2;
    }
    else{
        odd=(n/2)+1;
        even=n/2;
    }
    ll sum_even = (even*(even+1));
    ll sum_odd = (odd*odd);
    cout<<sum_even-sum_odd<<endl;
}