#include <bits/stdc++.h>
using namespace std;
int search(int value, int a[],int n ) {

        if(value < a[0]) {
            return a[0];
        }
        if(value > a[n-1]) {
            return a[n-1];
        }

        int lo = 0;
        int hi = n - 1;

        while (lo <= hi) {
            int mid = (hi + lo) / 2;

            if (value < a[mid]) {
                hi = mid - 1;
            } else if (value > a[mid]) {
                lo = mid + 1;
            } else {
                return a[mid];
            }
        }
        // lo == hi + 1
        return (a[lo] - value) < (value - a[hi]) ? a[lo] : a[hi];
    }

int main(void)
{
    int n,k;
    cin>>n>>k;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(k--){
    int x ;cin>>x;
    // int n = sizeof(arr) / sizeof(arr[0]);
    int result = search(x,arr, n - 1);
    cout<<result<<endl;}
    return 0;
}