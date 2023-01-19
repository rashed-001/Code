#include<bits/stdc++.h>
using namespace std;
int arr[300005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a,b,c;
    cin>>a>>b>>c;
    if(a[0]!='A'&&b[0]!='A'&&c[0]!='A')cout<<"Alice"<<endl;
    else if(a[0]!='B'&&b[0]!='B'&&c[0]!='B')cout<<"Bob"<<endl;
    else if(a[0]!='C'&&b[0]!='C'&&c[0]!='C')cout<<"Cindy"<<endl;
    else if(a[0]!='D'&&b[0]!='D'&&c[0]!='D')cout<<"Dani"<<endl;
    return 0;
}