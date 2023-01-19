#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int mn= *min_element(arr.begin(), arr.end());
    for(int i=0;i<n;i++){
        if(mn==arr[i]){
            cout<<i<<endl;
            break;
        }
    }
}