#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    string s,s1;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='A'){
            cout<<"A##";
        }
        else if(s[i]=='e'||s[i]=='E'){
            cout<<"E##";
        }
       else if(s[i]=='k'||s[i]=='K'){
            cout<<"K##";
        }
        else if(s[i]=='o'||s[i]=='O'){
            cout<<"O##";
        }
       else if(s[i]=='u'||s[i]=='U'){
            cout<<"U##";
        }
    }cout<<endl;}
    return 0;
}