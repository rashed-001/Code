#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005];
int main()
{
    ios_base:: sync_with_stdio(false),cin.tie(NULL);
    ll n;
    cin>>n;
    // int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll zero=0,neg=0,pos=0,sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1||arr[i]==-1)
            continue;
        else if(arr[i]<-1){
            sum+=abs(arr[i]+1);
            arr[i]-=(arr[i]+1);
        }
        else if(arr[i]>1){
            sum+=(arr[i]-1);
            arr[i]=1;
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            zero++;
            arr[i] = 1;
        }
        else if(arr[i] == -1)neg++;
        else if(arr[i] == 1)pos++;
    }
    sum += zero;
    pos += zero;
    if(neg % 2 == 1){
        if(zero > 0)pos--;
        else sum+=2;
    }
    cout<<sum<<endl;
    return 0;
}