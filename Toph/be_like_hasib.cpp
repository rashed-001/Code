#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   ll n,x;
   cin>>n>>x;
   ll low=1;
   ll high=n;
   ll cnt=0,mid;
   while(low<high){
       cnt++;
       mid = (low+high)>>1;
       if(mid<x){
           low = mid+1;
       }
       else high = mid;
   }
   cout<<cnt<<endl;
    return 0;
}