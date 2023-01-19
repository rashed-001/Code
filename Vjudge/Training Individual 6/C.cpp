#include<bits/stdc++.h>
using namespace std;
const int N = 100009;
int arr[N], tree[N];
char epic[100007];
void create_tree(int input[],int tree[], int n)
{
	int temp;
	for (int i = 1; i <= n; i++) {
		temp= i;
		while(temp <= n) {
			tree[temp] += input[i];
			temp += temp & -temp;
		}
	}
}
int update(int tree[], int temp, int val, int n)
{
	if(temp == 0) {
		return 0;
	}
	while(temp <= n) {
		tree[temp] +=  val;
		temp += temp & -temp;
	}
    return 1;
}
int query(int tree[], int temp)
{
	int me;
	me = 0;
	while(temp > 0) {
		me += tree[temp];
		temp -= temp & -temp;
	}
	return me;
}
void newtr(int tree[], int i, int j, int n)
{
	update(tree, i, 1, n);
	update(tree, j+1, -1, n);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,ans;
	cin >> t;
	for (int k = 1; k <= t; k++) {
		cin >> epic;
		int n = strlen(epic);
		for (int i = 0; i < n; i++) {
			arr[i+1] = epic[i] - '0';
		}
        int q;
		memset(tree, 0, sizeof(tree));
		cin >> q;
        char choice,temp;
        int x,y;
		cout << "Case " << k << ":\n";
		for (int i = 0; i < q; i++) {
			cin >> choice;
			switch(choice) {
				case 'I':
					cin >> x;
					cin >> y;
					newtr(tree, x, y, n);
					break;
				case 'Q':
					cin >> x;
					ans = (arr[x] ^ (query(tree, x) % 2));
					cout<<ans<<endl;
					break;
			}
		}
	}
    return 0;
}
