#include<bits/stdc++.h>
using namespace std;
int arr[300005];
void solve()
{
    int n,m,rb,cb,rd,cd;
    cin>>n>>m>>rb>>cb>>rd>>cd;
    int sol=0,res=0;
    if(rb<=rd){
        sol=rd-rb;
    }
    else sol=2*n-rb-rd;
    if(cb<=cd){
        res=cd-cb;
    }
    else res=2*m-cb-cd;
    cout<<min(res,sol)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}