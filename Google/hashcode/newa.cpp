#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string i,p;
    cin>>i>>p;
    char l=i[0];
    int len1=i.length();
    int len2=p.length();
    int cnt=0;
    for(int x=0;x<len2;x++){
        if(p[x]==l){
            cnt++;
            l=i[x];
        }
    }
    
    if(cnt==len1){
    printf("%d\n",len2-len1);}
    else{
        printf("IMPOSSIBLE\n");
    }
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        printf("Case #%d: ",i);
        solve();
        printf("\n");
    }
    return 0;
}