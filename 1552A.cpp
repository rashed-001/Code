#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        string s,t;
        cin>>s;
        t=s;
        sort(s.begin(),s.end());
        int diff=0;
        for(int i=0;i<n;i++){
            if(s[i] != t[i])diff++;
        }
        cout<<diff<<endl;
    }
    return 0;
}