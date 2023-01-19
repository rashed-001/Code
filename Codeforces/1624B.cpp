#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[200005];
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int fa = b-(c-b);
    int fb = (a+c)/2;
    if((a+c)%2)fb = -1;
    int fc = b + (b-a);
    bool flag = false;
    if(fa>0&&fa%a==0)flag=true;
    else if(fb>0&&fb%b==0)flag=true;
    else if(fc>0&&fc%c==0)flag=true;
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}