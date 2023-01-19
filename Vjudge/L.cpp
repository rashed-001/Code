#include<bits/stdc++.h>
using namespace std;
const int N=1000;
int main()
{
    int n;
    int arr[n+1];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi = 0;
	int ans = -1;
	for (int i = 2; i <= 1000; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) 
            if (arr[j] % i == 0) 
                cnt++;
		if (maxi < cnt)
             maxi = cnt, ans = i;
	}
	cout<<ans<<endl;
    return 0;
}