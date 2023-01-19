#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   ll t;
   cin>>t;
   while(t--)
   {
       ll n,c=0,i;
       cin>>n;
       ll arr[n+1];
       for(i=0;i<n;i++)
        cin>>arr[i];
       sort(arr,arr+n);
       for(i=0;i<n-1;i++)
       {
           if((arr[i]%2==0&&arr[i+1]%2!=0)||(arr[i]%2!=0&&arr[i+1]%2==0))
           {
                if((arr[i]^arr[i+1])==1){
                    c=1;
                   break;
                }
           }
       }
       if(c)
        cout<<"Yes"<<endl;
       else
        cout<<"No"<<endl;
   }
}