#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x>y){
            cout<<x-y<<endl;

        }
        else if(x==y)cout<<0<<endl;
        else{
            if((y-x)%2==0)cout<<(y-x)/2<<endl;
            else cout<<((y-x)/2)+2<<endl;
        }
    }
    return 0;
}