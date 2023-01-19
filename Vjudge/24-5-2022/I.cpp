#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005];
char c[15];
void solve()
{
    scanf("%s",c);
    int kop = atoi(c);
    // cout<<c<<endl;
    int cnt=0;
    for(int i=0;i<strlen(c);i++){
        int k=(c[i]-'0');
        if(k!=0){
        // cout<<k<<endl;
        if(kop%k==0)cnt++;}
        // cout<<kop%k<<endl;
        // cout<<cnt<<" "<<c[i]<<endl;
    }
    printf("%d\n",cnt);
}
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}