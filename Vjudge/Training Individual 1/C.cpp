#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    if(isPowerOfTwo(n))
        cout<<1<<endl;
    else{
        int cnt=0;
        while(n){
            if(n%2==1)
                cnt++;
            n/=2;
        }
        cout<<cnt<<endl;
    }
    return 0;
}