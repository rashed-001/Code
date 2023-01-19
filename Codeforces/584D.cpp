#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
  
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}
int main()
{
    int n;
    cin>>n;
    int k=0,l=0;
    if(isPrime(n))cout<<1<<"\n"<<n<<endl;
    else if(isPrime(n-2))cout<<"2\n"<<2<<" "<<n-2<<endl;
    else{
        cout<<3<<endl<<3<<" ";
        int m = n-3;
        for(int i=2;i<m;i++){
            if(isPrime(i)==true){
                if(isPrime(m-i)==true){
                    k=i;
                    l=m-i;
                    break;
                }
            }
        }
        cout<<k<<" "<<l<<endl;
    }
    return 0;
}