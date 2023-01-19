#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s1,s2;
    cin>>s1>>s2;
    int n = s1.length();
    int s1p=0;
    for(int i=0;i<n;i++){
        if(s1[i]=='+')s1p++;
        else s1p--;
    }
    int s2p=0,qq=0;
    for(int i=0;i<n;i++){
        if(s2[i]=='?')qq++;
        else{
            if(s2[i]=='+')s2p++;
        else s2p--;
        }
    }
    int dist = s1p-s2p;
    double res;
    if((dist+qq)%2!=0||qq<abs(dist)){
        res=0;
    }
    else{
        int mv = (qq+abs(dist))/2;
        int cnt=1;
        for(int i=0;i<mv;i++){
            cnt*=(qq-i);
        }
        for(int i=2;i<=mv;i++){
            cnt/=i;
        }
        res = (double) cnt /(1<<qq);
    }
    cout<<fixed<<setprecision(12)<<res<<endl;
    return 0;
}