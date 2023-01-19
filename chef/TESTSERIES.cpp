#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[6];
        int ind=0,eng=0,dr=0;
        for(int i=0;i<5;i++){
            cin>>arr[i];
            if(arr[i]==1)ind++;
            else if(arr[i]==2)eng++;
        }
        if(ind>eng)cout<<"INDIA"<<endl;
        else if(ind<eng)cout<<"ENGLAND"<<endl;
        else cout<<"DRAW"<<endl;
    }
    return 0;
}