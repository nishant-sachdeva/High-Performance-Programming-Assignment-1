#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>

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

	// scan matrix 1

	// for (int i = 0; i < p; ++i)
	// {
	// 	for (int j = 0; j<q ; j++)
	// 	{
	// 		get(ni);
	// 		A[i][j] = ni;
	// 	}
	// }

	// // scan matrix 2

	// for (int i = 0; i < q; ++i)
	// {
	// 	for (int j = 0; j<r ; j++)
	// 	{
	// 		get(ni);
	// 		B[i][j] = ni;
	// 	}
	// }


	// now we test for all the algos

  printf("hi\n");

	for (int i = 0; i < p; ++i)
	{
		for (int k = 0; k < r; ++k)
		{
			for (int j= 0; j < q; ++j)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}

	// for (int i = 0; i < p; ++i)
	// {
	// 	for (int j= 0;j  < r; ++j)
	// 	{
	// 		printf("%f ",C[i][j] );
	// 	}
	// 	printf("\n");
	// }
	return 0;
}
