#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>

#define get(a) int a; scanf("%d", &a);

#define n 1000

long long int A[n][n];
long long int B[n][n];
long long int C[n][n];



int main()
{
//	get(p);
	//get(q);
	//get(r);


  int ih,jh,kh,i,j,k;
  int p = n;
  int q = n;
  int r  = n;


	// form 2 random number matrices

	for (int i = 0; i < n; ++i)
	{
		for (int  j = 0 ; j<n ; j++)
		{
			A[i][j] = 1000;
			B[i][j] = 1000;

			C[i][j] = 0;
		}
	}

	const int block_size = 64/sizeof(int);



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

  for(ih = 0;ih < n;ih += block_size){
  	int imax = ih + block_size > n ? n : ih+block_size; 
      for(jh = 0;jh < n;jh += block_size){
      	int jmax = jh + block_size > n ? n : jh+block_size;	
          for(kh = 0;kh < n;kh += block_size){
          	int kmax = kh + block_size > n ? n : kh+block_size;
              
              for(j = jh;j < jmax;j++){
              	for(i = ih;i < imax;i++){
              		for (k = kh; k < kmax; ++k)
              		{
              			C[i][j] += A[i][k]*B[k][j];
              		}
              	}
              }
          }
      }
  }

  //for(i = 0;i < 1000;i++){
  	//for(j = 0;j < 1000;j++){
  	//	for(k = 0;k < 1000;k++){
  	//		printf("%lld ",C[i][j]);
  	//	}
  	//	printf("\n");
  	//}
  //}

	//for (int i = 0; i < p; ++i)
	//{
	//	for (int k = 0; k < r; ++k)
	//	{
	//		for (int j= 0; j < q; ++j)
	//		{
	//			C[i][j] += A[i][k] * B[k][j];
	//		}
	//	}
	//}

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
