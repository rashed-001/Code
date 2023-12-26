#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        string s;
        cin>>n;
        cin>>s;
        bool flag = false;  
        for(int i=0;i<n;i++){
            if(s[i]=='a'&&s[i+1]=='b'){
                cout<<i+1<<" "<<i+2<<endl;flag = true;
                break;
            }
            else if(s[i]=='b'&&s[i+1]=='a'){
                cout<<i+1<<" "<<i+2<<endl;flag = true;
                break;
            }
        }
        if(!flag)cout<<-1<<" "<<-1<<endl;
    }
    return 0;
}