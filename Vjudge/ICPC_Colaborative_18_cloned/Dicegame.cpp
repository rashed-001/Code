#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int e,f,g,h;
    cin>>e>>f>>g>>h;
    if((a+b+c+d)==(e+f+g+h))cout<<"Tie"<<endl;
    else if((a+b+c+d)>(e+f+g+h)){
        cout<<"Gunnar"<<endl;
    }
    else cout<<"Emma"<<endl;
}
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
    solve();
    }
    return 0;
}