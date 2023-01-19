#include <iostream>
using namespace std;
const int N = 1e5+10;
int a[N];
int pf[N];

int main() {
int n,q;
cin >> n>>q;
for(int i=0; i<n; i++){
	cin >> a[i];
	if(i==0)
		pf[i]=a[i];
	else
		pf[i] = pf[i-1] + a[i];
	//cout<<pf[i];
}
// int q;
// cin >> q;
while(q--){
	int l, r;
	cin >> l >> r;
	if(l==0)
		cout << pf[r] << endl;
    else if(l==r)cout<<a[r]<<endl;
	else
		cout << pf[r] - pf[l-1] << endl;
}
return 0;
}
