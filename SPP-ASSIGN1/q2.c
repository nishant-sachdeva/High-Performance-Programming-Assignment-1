#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <string.h>
#define bottle_neck 32



void merge(int arr[], int l, int m, int r) 
{ 
    // printf("entering merge function\n");
    register int i, j, k; 
    register int n1 = m - l + 1; 
    register int n2 =  r - m; 
  
    /* create temp arrays */
    int *L, *R; 
    L = (int*) malloc(n1 * sizeof(int));
    R = (int*) malloc(n2 * sizeof(int));
  
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
    free(L);
    free(R);
}


void insertion_sort(int arr[] , int left, int right)
{
    // printf("entering insertion_sort function\n");
    register int n = right -left + 1;

    register int key,j,i;

    for (key = 0, j= 0 , i = left + 1; i <= right; i++)
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



int* merge_sort(int *arr, int n)
{
    printf("hi there\n");
    // int *ret;

    register int i,curr_size,left_start,a;

    // memcpy(ret, arr, n*sizeof(int));

    // printf("we are in the new merge function\n");
    // int n = right - left + 1;
    __builtin_prefetch (&arr[bottle_neck], 1, 3);

    for (i = 0 , a = n-1 ; i<n ; i += bottle_neck)
    {
        register int b =  i + bottle_neck - 1;
        b = b ^ ((a^b) & -( a < b) );
        insertion_sort(arr, i , b);
        __builtin_prefetch (&arr[i+bottle_neck], 1, 3);

    }

    printf("reaching past the insertion  sort stage\n");

   for (curr_size=bottle_neck; curr_size<=n-1; curr_size <<= 1) 
   {
       for (left_start=0; left_start<n-1; left_start += (curr_size<<1)) 
       { 
               register int a  = left_start + curr_size - 1;
               register int b  = n - 1;

               register int mid = b ^ ((a^b) & -( a < b) );
               
               a += curr_size ;  

               register int right_end = b ^ ((a^b) & -( a < b) ); 
      
               merge(arr, left_start, mid, right_end);
               // printf("We finished a merge\n"); 
       } 
   } 
   printf("almost there!\n");
   return arr;
}


// int main()
// {
    

//     return 0;   
// }
