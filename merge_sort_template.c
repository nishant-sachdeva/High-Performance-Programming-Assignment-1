#include <stdio.h>
#include <time.h>
#include<stdlib.h>

#include "q2.c"

#define n 1000000


void merge_sort(int *arr, int left, int right);

int main()
{
    int arr[n];

    // now we generate an array of random numbers and the pass it for further testing

	for(int i = 0 ; i< n; i++)
        // arr[i] = (int) ( (double)rand()  / (double)RAND_MAX ) ;
        arr[i] = n - i;

    clock_t start_time, end_time;

    start_time = clock();

    // make the function call

    merge_sort(arr , 0 , n-1);

    end_time = clock() - start_time;

    // for (int i = 0; i < n; ++i)
    // {
    //     printf("%d ",arr[i] );
    // }

    // printf("\n");

    double time_taken = ((double)end_time)/CLOCKS_PER_SEC; // in seconds 

	printf("Took %f seconds to execute \n", time_taken); 

}
