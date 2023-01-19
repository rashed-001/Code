#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005];bool check[100005];
const int mod=1e9+7;
void solve()
{
    const int di[]={0,1,1,-1};
    const int dj[]={1,0,1,1};
    int n;
    cin>>n;
    vector<string>s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int v=0;v<4;v++){
                int ni=i,nj=j;
                int cnt=0;
                for(int k=0;k<6;k++){
                    if(ni<0||nj<0||ni>=n||nj>=n){
                        cnt=999;
                        break;
                    }
                    if(s[ni][nj]=='.')cnt++;
                    ni+=di[v],nj+=dj[v];
                }
                if(cnt<=2){
                    cout<<"Yes"<<endl;return;
                }
            }
        }
    }
    cout<<"No"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}