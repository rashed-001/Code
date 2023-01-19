#include<bits/stdc++.h>
using namespace std;
void solve()
{
   char i[100005],p[100005];
    scanf("%s%s",i,p);
    map<int,int>mp1,mp2;
    int len1=strlen(i);
    int len2=strlen(p);
    for(int x=0;x<len1;x++){
        int l=i[x];
        mp1[l]++;
    }
    for(int x=0;x<len2;x++){
        int l1=p[x];
        mp2[l1]++;
    }
    int cnt=0;
    for(int x=0;x<len1;x++){
        if((!mp2[i[x]]&&mp1[i[x]])||(mp2[i[x]]<mp1[i[x]])){
           printf("IMPOSSIBLE\n");
           return;
        }
    }
    printf("%d\n",len2-len1);
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