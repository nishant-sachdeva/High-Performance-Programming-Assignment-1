#include<stdio.h>
#include<stdlib.h>

typedef struct Matrix
{
	int matrix[1000][1000];
}Matrix;

Matrix *matrix_multiply(Matrix *a,Matrix *b,int p,int q,int r)
{
	Matrix *result;
	result = malloc(sizeof(Matrix));
	/*
	size of matrix a is pxq
	size of matrix b is qxr
	Maximum value of p,q or r can be 1000.
	Your Code goes here. The output of their matrix multiplication
	should be stored in result and returned. Just code this function,
	no need to write anything in main(). This function will be called directly.
	We are dealing with pointers so use result->matrix and not result.matrix

	Also note you can write any other function that you might need.
	*/

    int *result_poin;*a_poin;
    int a_val;
    long val = 0;

    for(int j = 0;j < q;j++){
        result_poin = result->matrix;
        a_poin = a->matrix;
        for(int i = 0;i < p;i++){
        	a_val = *a_poin;
            val = 0;
            for(int k = 0;k < r;k++){
                *(int *)((long)result_poin+k)+=a_val * *(int *)(b->matrix+k);
            }

            result_poin += 1000;
            a_poin += 1000;
         }
         (int *)b->matrix += 1000;
         (int *)a->matrix += 1;
     }

    return result;
}

int main()
{
	Matrix a,b;

	for(int i = 0;i < 1000;i++){
		for(int j = 0;j < 1000;j++){
			a.matrix[i][j] = 2;
			b.matrix[i][j] = 2;
		}
	}

	Matrix *res = matrix_multiply(&a,&b,1000,1000,1000);

	for(int i =  0;i < 1;i++){
		printf("%d\n",res->matrix[i][0]);
	}
	return 0;
}

