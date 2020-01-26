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

    //int *a_poi = (int *)a->matrix;

    for(int i = 0;i < p;i++){
        int *temp = (int *)a->matrix[i];
        int *result_point = (int *)result->matrix[i];
        for(int j = 0;j < q;j++){
        	long df = *(temp+j);
            int *b_sub = b->matrix[j];
            for(int k = 0;k < r;k+=20){
            	result_point[k] += df*b_sub[k];
            	result_point[k+1] += df*b_sub[k+1];
            	result_point[k+2] += df*b_sub[k+2];
            	result_point[k+3] += df*b_sub[k+3];
            	result_point[k+4] += df*b_sub[k+4];
            	result_point[k+5] += df*b_sub[k+5];
            	result_point[k+6] += df*b_sub[k+6];
            	result_point[k+7] += df*b_sub[k+7];
            	result_point[k+8] += df*b_sub[k+8];
            	result_point[k+9] += df*b_sub[k+9];
            	result_point[k+10] += df*b_sub[k+10];
            	result_point[k+11] += df*b_sub[k+11];
            	result_point[k+12] += df*b_sub[k+12];
            	result_point[k+13] += df*b_sub[k+13];
            	result_point[k+14] += df*b_sub[k+14];
            	result_point[k+15] += df*b_sub[k+15];
            	result_point[k+16] += df*b_sub[k+16];
            	result_point[k+17] += df*b_sub[k+17];
            	result_point[k+18] += df*b_sub[k+18];
            	result_point[k+19] += df*b_sub[k+19];
            }
         }
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

