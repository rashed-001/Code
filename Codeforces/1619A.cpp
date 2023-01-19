#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        string s;
        cin>>s;
        int n=s.length();
        string st1,st2;
        int flag=1;
        if(n%2!=0)cout<<"NO"<<endl;
        else{
       for(int i=0;i<n/2;i++){
           if(s[i]!=s[n/2+i]){
               flag=0;
               break;
           }
       }
       if(flag==1)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }}
    
}