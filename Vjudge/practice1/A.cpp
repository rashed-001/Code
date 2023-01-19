#include<bits/stdc++.h>
using namespace std;
int arr[200005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int odd=0,even=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0)even++;
        else odd++;
    }
    if(abs(odd-even)==1||odd==even)cout<<"Good"<<endl;
    else cout<<"Not Good"<<endl;
    return 0;
}