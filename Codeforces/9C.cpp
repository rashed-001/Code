#include<bits/stdc++.h>
using namespace std;
vector<int>v;
void bb(int x,int y)
{
    if(y==10){
        v.push_back(x);
        return;
    }
    bb(x*10,y+1);
    bb(x*10+1,y+1);
}
int main()
{
    bb(0,1);
    v.push_back(1e9);
    int n;
    cin>>n;
    int ans = upper_bound(v.begin(),v.end(),n)-v.begin()-1;
    cout<<ans<<endl;
    return 0;
}