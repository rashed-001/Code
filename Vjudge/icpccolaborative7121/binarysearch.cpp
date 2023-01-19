#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
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
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "NO"<<endl
        : cout << "YES" << endl;}
    return 0;
}