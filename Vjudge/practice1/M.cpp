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
   vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int diff = (*max_element(v.begin(),v.end())) - (*min_element(v.begin(),v.end()));
    cout<<diff*n<<endl;
    return 0;
}