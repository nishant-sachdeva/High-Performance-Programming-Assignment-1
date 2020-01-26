#include "stdio.h"
#include <string.h>
#define bottle_neck 32

void merge(int arr[], int l, int m, int r) 
{ 
    // printf("entering merge function\n");
    register int i, j, k; 
    register int n1 = m - l + 1; 
    register int n2 =  r - m; 
  
    /* create temp arrays */
    register int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    memcpy(L,(arr+l),sizeof(int)*n1);

    memcpy(R,(arr+m+1),sizeof(int)*n2);
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    memcpy(arr+k,L,sizeof(int)*(n1-i));
  
    /* Copy the remaining elements of R[], if there 
       are any */
    memcpy(arr+k,R,sizeof(int)*(n2-j));
} 





void merge_sort(int arr[] , int left, int right)
{
    if ( right-left+1 <= bottle_neck )
    {
        // then we implement insertion sort and return the array as such
        // apparetly this has a 10 to 15 % increase in performance
        for (int key = 0, j= 0 , i = left + 1; i <= right; i++)
        { 
            key = arr[i]; 
            j = i - 1; 
  
            while (j >= left && arr[j] > key)
            { 
                arr[j + 1] = arr[j]; 
                j = j - 1; 
            } 
            arr[j + 1] = key; 
        }
    }
    else 
    {
        if (left < right) 
        { 
            // Same as (l+r)/2, but avoids overflow for 
            // large l and h 
            int m = left+(right-left)/2; 
      
            // Sort first and second halves 
            merge_sort(arr, left, m); 
            merge_sort(arr, m+1, right); 
            
            // if( arr[m] > arr[m+1])
                merge(arr, left, m, right); 
        }
    }
    return;
}