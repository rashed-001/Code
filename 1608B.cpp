#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[200005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    int n,a,b;
    cin>>n>>a>>b;
    if(a+b+2>n||abs(a-b)>1){cout<<-1<<endl; continue;}
    bool flag=false;
    int pos=n;
    if(a<b)swap(a,b),flag=true;
    if(a==b){
        for(int i=0;i<=a;i++)arr[n-i*2]=pos--;
        for(int i=0;i<=b;i++)arr[n-i*2-1]=pos--;
        for(int i=1;i<=pos;i++)arr[i]=i;
    }
    else{
         for(int i=0;i<a;i++)arr[n-i*2-1]=pos--;
        for(int i=0;i<=b;i++)arr[n-i*2]=pos--;
        for(int i=1;i<=pos;i++)arr[i]=i;
    }
    for(int i=1;i<=n;i++){
        if(!flag)cout<<arr[i]<<" ";
        else cout<<n-arr[i]+1<<" ";
         
    }
    cout<<endl;
    }
    return 0;
}