#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool countFreq(int arr[], int n)
{
    int k=0;
	unordered_map<int, int> mp;
	for (int i = 0; i < n; i++)
		mp[arr[i]]++;

	for (auto x : mp)
		{
            if(x.second>2){
                k=1;
                break;}
        }
    if(k==0)return true;
    else return false;
}

int main()
{
	int t;
    cin>>t;
    for(int l=1;l<=t;l++){
        int n,k;
        cin>>n>>k;
        int arr[n+1];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        if(n>2*k)cout<<"Case #"<<l<<": "<<"NO"<<endl;
        else if(countFreq(arr,n)==false){
            cout<<"Case #"<<l<<": "<<"NO"<<endl;
        }
        else cout<<"Case #"<<l<<": "<<"YES"<<endl;
    }
}
