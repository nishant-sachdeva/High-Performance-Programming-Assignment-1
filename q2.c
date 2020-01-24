#include "stdio.h"

#define bottle_neck 32

void merge(int arr[], int l, int m, int r) 
{ 
    // printf("entering merge function\n");
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



void insertion_sort(int arr[] , int left, int right)
{
    // printf("entering insertion_sort function\n");
    int n = right -left + 1;

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



void merge_sort(int arr[], int left, int right) 
{

    // printf("we are in the new merge function\n");
    int n = right - left + 1;

    for (int i = 0 , a = n-1 ; i<n ; i += bottle_neck)
    {
        int b =  i + bottle_neck - 1;
        b = b ^ ((a^b) & -( a < b) );
        insertion_sort(arr, i , b);
        __builtin_prefetch (&arr[i+bottle_neck], 1, 3);
        
    }


   for (int curr_size=bottle_neck; curr_size<=n-1; curr_size <<= 1) 
   {
       for (int left_start=0; left_start<n-1; left_start += (curr_size<<1)) 
       { 
               int a  = left_start + curr_size - 1;
               int b  = n - 1;

               int mid = b ^ ((a^b) & -( a < b) );
               
               a += curr_size ;  

               int right_end = b ^ ((a^b) & -( a < b) ); 
      
               merge(arr, left_start, mid, right_end);  
       } 
   } 
   return;
} 