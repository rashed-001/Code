#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
	int n;
	cin>>n;
	int a[n+5];
    for(int i=1;i<=n;++i){
        cin>>a[i];
    }
    if(n&1){
        cout<<a[n];
        for(int i=n-2;i>=1;i-=2)
            cout<<" "<<a[i];
        for(int i=2;i<=n-1;i+=2)
            cout<<" "<<a[i];
        cout<<endl;
    }else{
         cout<<a[n];
        for(int i=n-2;i>=2;i-=2)
            cout<<" "<<a[i];
        for(int i=1;i<=n-1;i+=2)
            cout<<" "<<a[i];
            cout<<endl;
        }
}
int main()
{
	int t=1;
	// cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}
