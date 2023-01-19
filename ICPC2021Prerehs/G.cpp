#include<bits/stdc++.h>
using namespace std;
#define ll int
#define mx 30005
int vertArr[mx][mx]; //the adjacency matrix initially 0
// int count = 0;
//pair<ll,ll>a[5001],b[5001];
ll a[mx];
ll b[mx];
//freopen ("input.txt","r",stdin);
//freopen ("output.txt","w",stdout);
ll fix_mod(ll x, ll y)
{
    return (y + x % y) % y;
}

void add_edge(int u, int v) {       //function to add edge into the matrix
   vertArr[u][v] = 1;
   vertArr[v][u] = 1;
}
void solve()
{
int n;
   cin>>n;
   vector<ll>a;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    a.push_back(x);
   }
   for(ll i=0;i<n-1;i++){
    ll x,y;
    cin>>x>>y;
    add_edge(x,y);
   }
   ll s=0,k=0;
   ll mx1=INT_MIN;
   ll a1[n];
   for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
        if(vertArr[i][j]%2==0){
            s+=a[i]-a[j];
        }
        else s-=a[i]-a[j];
    }
    if(mx1<s){}
    mx1=s;
    k=i;
   }
   cout<<k+1<<endl;
}
/*Read the damn question carefully,show base case*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    cin>>t;
    for(ll i=1; i<=t; i++)
    {
        cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}