#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int n = s.length();
        int one=0,zero=0,two=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')one++;
            else if(s[i]=='0')zero++;
            else two++;
        }
        if(zero==0)cout<<0<<endl;
        else if(zero==n)cout<<1<<endl;
        else{
            int ft=s.find('0');
            int ls=s.rfind('0');
            if(ls-ft+1==zero)cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
     return 0;
}