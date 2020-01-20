#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>

#include <time.h>

#include "q1.c"


#define get(a) int a; scanf("%d", &a);

#define n 4096

double A[n][n];
double B[n][n];
double C[n][n];



int main()
{
//	get(p);
	//get(q);
	//get(r);



  int p = n;
  int q = n;
  int r  = n;


	// form 2 random number matrices

	for (int i = 0; i < n; ++i)
	{
		for (int  j = 0 ; j<n ; j++)
		{
			A[i][j] = (double)rand()  / (double)RAND_MAX;
			B[i][j] = (double)rand()  / (double)RAND_MAX;

			C[i][j] = 0;
		}
	}
	clock_t start_time;
	start_time = clock();
	/// here we will pass all te three arrays
	matrix_multiply(&A , &B , &C , p , q , r);

	clock_t end_time = clock() - start_time;

	double time_taken = ((double)end_time)/CLOCKS_PER_SEC; // in seconds 

	printf("function() took %f seconds to execute \n", time_taken); 

	return 0;
}