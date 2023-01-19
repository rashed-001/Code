#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)cout<<"2 "<<(n-1)-2<<" 1"<<endl;
        else {
            int temp=(n-1)/2;
            if(temp%2==0)cout<<temp-1<<" "<<temp+1<<" 1"<<endl;
            else cout<<temp-2<<" "<<temp+2<<" 1"<<endl;
        }
    }
    return 0;
}