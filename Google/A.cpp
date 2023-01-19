#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        int r,c;
        cin>>r>>c;
        cout<<"Case #"<<k<<":"<<endl;
        for(int i=0;i<2*r+1;i++){
            for(int j=0;j<2*c+1;j++){
                if(i==0&&j==0)cout<<'.';
                    else if(i==0&&j==1)cout<<'.';
                    else if(i==1&&j==0)cout<<'.';
                    else if(i==1&&j==1)cout<<'.';
                else if(i%2==0){
                    if(j%2==0)cout<<'+';
                    else cout<<'-';
                }
                else if(i%2!=0){
                    if(j%2==0)cout<<'|';
                    else cout<<'.';
                }
            }
            cout<<endl;
        }
    }
}