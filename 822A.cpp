#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long kop=1;
    long long a,b;
    cin>>a>>b;
    for(int i=1;i<=min(a,b);i++){
        kop*=i;
    }
    cout<<kop<<endl;
}