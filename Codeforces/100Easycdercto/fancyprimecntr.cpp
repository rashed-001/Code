#include <bits/stdc++.h>
using namespace std;
void fillPrimes(vector<int>& prime, int high)
{
	bool ck[high + 1];
	memset(ck, true, sizeof(ck));
	ck[1] = false;
	ck[0] = false;
	for (int i = 2; (i * i) <= high; i++) {
		if (ck[i] == true) {
			for (int j = i * i; j <= high; j = j + i) {
				ck[j] = false;
			}
		}
	}
	for (int i = 2; i * i <= high; i++) {
		if (ck[i] == true) {
			prime.push_back(i);
		}
	}
}
// in segmented sieve we check for prime from range [low, high]
int segmentedSieve(int low, int high)
{
	bool prime[high - low + 1];
	memset(prime, true, sizeof(prime));
	vector<int> chprime;
	fillPrimes(chprime, high);
	for (int i : chprime) {
		int lower = (low / i);
		if (lower <= 1) {
			lower = i + i;
		}
		else if (low % i) {
			lower = (lower * i) + i;
		}
		else {
			lower = (lower * i);
		}
		for (int j = lower; j <= high; j = j + i) {
			prime[j - low] = false;
		}
	}
    int cnt=0;
	for (int i = low; i <= high; i++) {
		if (prime[i - low] == true) {
			// cout << (i) << " ";
            cnt++;
		}
	}
    return cnt;
}
int main()
{
	int n;
    cin>>n;
    while(n--){
	int low,high;
    cin>>low>>high;
    if(low==1||low<1){
	cout<<segmentedSieve(low, high)-1<<endl;}else cout<<segmentedSieve(low, high)<<endl;}
}
