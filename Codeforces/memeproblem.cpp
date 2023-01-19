#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,tmp;
    cin>>s;
    int mul=1;
    if(s[0]=='i')mul=4;
    else if(s[0]=='l')mul=8;
    else mul=1;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(isdigit(s[i])){
            tmp[i]=s[i];
        }
    }
    cout<<tmp<<endl;
     int x = atoi(tmp);
    cout<<x*mul<<endl;
}