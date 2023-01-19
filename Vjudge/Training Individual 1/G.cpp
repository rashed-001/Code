#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
int main()
{
    ll n,k;
    cin>>n>>k;
    if(k>n)cout<<"NO"<<endl;
    else if(k==1){
        if(isPowerOfTwo(n)){
            cout<<"YES"<<endl;
            cout<<n<<endl;}
        else cout<<"NO"<<endl;
    }
    else{
        ll arr[k+1];
        fill(arr,arr+k,1);
        ll sum=k;
        for(int i=k-1;i>=0;i--){
            while(sum+arr[i]<=n){
                sum+=arr[i];
                arr[i]*=2;
            }
        }
        if(sum!=n)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<k;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}