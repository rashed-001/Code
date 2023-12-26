#include<bits/stdc++.h>
using namespace std;
int arr[300005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string s1=s;int c;
        sort(s1.begin(),s1.end());
        cout<<s1[0]<<" ";
        for(int i=0;i<s.length();i++){
            if(s[i]==s1[0]){
                c=i;;
            }
        }
        for(int i=0;i<c;i++){
            cout<<s[i];
        }
        for(int i=c+1;i<s.length();i++){
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}