#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
double soltn(int x,int n)
{
    double ans=1;
    for(int i=1;i<=n;i++){
        ans*=x-i+1;
    }
    for(int i=1;i<=n;i++){
        ans/=i;
    }
    return ans;
}
void solve()
{
   
}
int main()
{
    int n;
   double p;
   cin>>n>>p;
   for(int i=0;i<=n;i++){
        double res=0;
    for(int j=1;j<=3;j++){
        int ans = soltn(i,j)*soltn(n-i,3-j);
        if(j==1){
            res+=ans*0.5;
        }
        if(j>=2)res+=ans;
    }
    res/=soltn(n,3);
    if(res>=p)
        return cout<<i<<endl,0;
   }
    return 0;
}