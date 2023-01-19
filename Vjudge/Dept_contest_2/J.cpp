#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
        int a,b;
        cin>>a>>b;
        if(a<b){
            swap(a,b);
        }
        int c=a%b;
        while(true){
            if(c==0){
                cout<<"NOT GOOD"<<endl;
                return;
            }
            if(c==1){
                cout<<"GOOD"<<endl;
                return;
            }
            a=b;b=c;c=a%b;
        }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}