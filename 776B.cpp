#include<bits/stdc++.h>
using namespace std;
int seive[1000005];
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n+1;i++){
        if(!seive[i]){
            for(int j=i*2;j<=n+1;j+=i){
                //if(seive[i])
                seive[j]=1;
            }
        }
    }
    if(n>2){
        cout<<2<<endl;
    }
    else cout<<1<<endl;
    for(int i=2;i<=n+1;i++){
        if(!seive[i])cout<<"1 ";
        else cout<<"2 ";
    }
    cout<<endl;
    return 0;
}