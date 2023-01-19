#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=10000001;
int n,m,now,tot;
int a[MAXN], b[MAXN];
int root[MAXN/2];
int ls[MAXN],rs[MAXN],cnt[MAXN];
ll gcd(ll a, ll b)
{
    if (!a)
        return b;
    return gcd(b % a, a);
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}
void build(int &cur,int l,int r)
{
    cur=tot++;
     cnt[cur]=0; 
     if(l!=r)
     {
         int mid=(l+r)/2;
          build(ls[cur],l,mid);
          build(rs[cur],mid+1,r);    
     }
 }
 void update(int pre,int pos,int &cur,int l,int r)
 {
     cur=tot++;
     cnt[cur]=cnt[pre]+1;
     ls[cur]=ls[pre];rs[cur]=rs[pre];
     if(l==r)
         return ;
     int mid=(l+r)/2;
     if(pos<=mid)
         update(ls[pre],pos,ls[cur],l,mid);
     else    
         update(rs[pre],pos,rs[cur],mid+1,r);
 }
 int query(int lt,int rt,int l,int r,int k)
 {
     if(l==r)
        return l;
     int now=cnt[ls[rt]]-cnt[ls[lt]];
     int mid=(l+r)/2;
     if(k<=now)
         return query(ls[lt],ls[rt],l,mid,k);
     else 
         return query(rs[lt],rs[rt],mid+1,r,k-now);
 }
void solve()
{
       cin>>n>>m;
       for(int i=1;i<=n;i++)
       { 
           cin>>a[i];
           b[i]=a[i];
       }
       sort(b+1,b+n+1);
       int length=unique(b+1,b+n+1)-b-1;
       for(int i=1;i<=n;i++){
           a[i]=lower_bound(b+1,b+length+1,a[i])-b;
       }
       tot=0;
       build(root[0],1,length);
       for(int i=1;i<=n;i++){
           update(root[i-1],a[i],root[i],1,length); 
       }
       for(int i=1;i<=m;i++)
       {
           int x,y,z;
           cin>>x>>y>>z;
           cout<<b[query(root[x-1],root[y],1,length,z)]<<endl;
       }     
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