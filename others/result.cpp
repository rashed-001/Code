#include<bits/stdc++.h>
using namespace std;
char arr[41],stu[10];
int main()
{
    char res[10]={'a','b','b','c','a','b','d','a','c','d'};
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    string s;
    cin>>s;
    for(int j=0;j<10;j++){
        cin>>stu[j];

    }
    int cnt=0;
    for(int l=0;l<10;l++){
        if(res[l]==stu[l]);
        cnt++;
    }
    cout<<s<<" result is "<<cnt<<endl;
    memset(stu,0,10);
    cnt=0;
    }
    cout<<endl;
}