#include <stdio.h>

#define MAX_SIZE 100 // Maximum size of the array

int main()
{
    int arr[MAX_SIZE]; // Declares an array of size 100
    int size;          // Total number of elements in array
    int i, j, k;       // Loop control variables

    /* Input size of the array */
    printf("Enter size of the array : ");
    scanf("%d", &size);
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
int swap=0;
    for (int c = 0 ; c < size - 1; c++)
  {
    for (int d = 0 ; d < size - c - 1; d++)
    {
      if (arr[d] > arr[d+1])
      {
        swap       = arr[d];
        arr[d]   = arr[d+1];
        arr[d+1] = swap;
      }
    }
  }
    /*
     * Find duplicate elements in array
     */
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {          
            if(arr[i] == arr[j])
            {
                for(k=j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                size--;

                /* If shifting of elements occur then don't increment j */
                j--;
            }
        }
    }


    /*
     * Print array after deleting duplicate elements
     */
    printf("\nArray elements after deleting duplicates : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}