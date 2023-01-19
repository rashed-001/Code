#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll sum=0;
    for(auto it:s)sum+=(it-'0');
    for(int i=0;i<=sum;i++){
        int temp=0,cnt=0;
        for(auto it:s){
            temp+=(it-'0');
            if(temp==i){
                cnt++;
                temp=0;
            }
        }
        if(temp==0&&cnt>1){
            cout<<"YES"<<endl;
           return 0;
        }
    }
    cout<<"NO"<<endl; 
}