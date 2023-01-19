#include<bits/stdc++.h>
using namespace std;
int arr[200005];
void solve(int x, int y, int n)
{
	if (n <= 0) {
		cout << x / y << endl;
		return;
	}
    int cnt=0;
	int d = x / y;
	for (int i = 0; i <= n; i++) {
        if(i==n){
        int k=d;
		x = x - (y * d);
		if (x == 0)
	     {
                 for(int i=0;i<n-cnt+1;i++){
                     cout<<0;
                 }
                  break;
         }
		x = x * 10;
		d = x / y;
        
		x = x - (y * d);
		if (x == 0)
	     {
                 for(int i=0;i<n-cnt+1;i++){
                     cout<<0;
                 }
                  break;
         }
		x = x * 10;
		d = x / y;
        if(d>=5){k+=1;
        cout<<k;
        break;}
        }
		cout << d;
        cnt++;
		x = x - (y * d);
		if (x == 0)
	     {
                 for(int i=0;i<n-cnt+1;i++){
                     cout<<0;
                 }
                  break;
         }
		x = x * 10;
		d = x / y;
		if (i == 0)
			cout << ".";
	}
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b,k;
    cin>>a>>b>>k;
    solve(a, b, k);
    return 0;
}