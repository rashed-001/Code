#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    string s, t;
    cin>>s>>t;
    int n = s.length();
    int m = t.length();
    int c1[n+1] = {0};
    int c2[m+1] = {0};
    for(int i=1;i<n+1;i++){
        c1[i] = c1[i-1];
        if(s[i-1] == 'A'){ 
            ++c1[i];
        }
    }
    for(int i=1;i<m+1;i++){
        c2[i] = c2[i-1];
        if(t[i-1] == 'A') {
            ++c2[i];
        }
    }
    int q;
    cin>>q;
    int l1, r1, l2, r2;
    while(q--)
    {
        cin>>l1>>r1>>l2>>r2;
        int ca1 = c1[r1] - c1[l1-1];
        int cb1 = (r1-l1+1)-ca1;
        int ca2 = c2[r2] - c2[l2-1];
        int cb2 = (r2-l2+1)-ca2;
        if((ca1+cb1*2)%3 == (ca2+cb2*2)%3){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
