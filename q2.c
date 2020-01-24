#include "stdio.h"

#define bottle_neck 43


void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
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
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    }
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