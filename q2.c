#include "stdio.h"

#define bottle_neck 20


void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    i = 0;
    while(i < n1) 
    {
        L[i] = arr[l + i]; 
        i++;
    }
    j = 0;
    while(j < n2)
    {
        R[j] = arr[m + 1+ j]; 
        j++;
    }
  
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
        arr[k++] = L[i++]; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k++] = R[j++]; 
    }
} 


int min (int a, int b)
{
    return b ^ ((a^b) & -( a < b) );
}



void merge_sort(int arr[], int left, int right) 
{

    int n = right -left + 1;

    if (  n <= bottle_neck )
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
        return;
    }

   for (int curr_size=1; curr_size<=n-1; curr_size = 2*curr_size) 
   { 
       // Pick starting point of different subarrays of current size 
       for (int left_start=0; left_start<n-1; left_start += 2*curr_size) 
       { 
           // Find ending point of left subarray. mid+1 is starting  
           // point of right 
           int a  = left_start + curr_size - 1;
           int b  = n - 1;

           int mid = b ^ ((a^b) & -( a < b) );
           
           a += curr_size ;  
           
           int right_end = b ^ ((a^b) & -( a < b) ); 
  
           // Merge Subarrays arr[left_start...mid] & arr[mid+1...right_end] 
           merge(arr, left_start, mid, right_end); 
       } 
   } 
   return;
} 