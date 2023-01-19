// Optimized bubble sort in C++
#include <bits/stdc++.h>
using namespace std;
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

// perform bubble sort
void bubbleSort(int array[], int size) {
    
  // loop to access each array element
  for (int step = 0; step < (size-1); ++step) {
      
    // check if swapping occurs
    int swapped = 0;
    
    // loop to compare two elements
    for (int i = 0; i < (size-step-1); ++i) {
        
      // compare two array elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {

        // swapping occurs if elements
        // are not in intended order 
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        
        swapped = 1;
      }
    }
    // no swapping means the array is already sorted
    // so no need of further comparison
    // if (swapped == 0){
    //   printArray(array,size);break;}
    //   else printArray(array,size);
    printArray(array,size);
  }
}

// print an array
int main() {
  int data;
  cin>>data;
  int arr[data+1];
  for(int i=0;i<data;i++){
      cin>>arr[i];
  }
  
  // find the array's length
  
  bubbleSort(arr, data);
}