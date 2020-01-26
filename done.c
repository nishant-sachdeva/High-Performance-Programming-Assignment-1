#include<stdio.h>
#include<stdlib.h>


void matrix_multiply(int a[][1000],int b[][1000],int p,int q,int r)
{
	int result[1000][1000];
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

    for(int j = 0;j < q;j++){
        for(int i = 0;i < p;i++){
            for(int k = 0;k < r;k++){
            	result[i][k] += a[i][j]*b[j][k];
            }
         }
     }
    
}

int main()
{
	int a[1000][1000],b[1000][1000];

	for(int i = 0;i < 1000;i++){
		for(int j = 0;j < 1000;j++){
			a[i][j] = 2;
			b[i][j] = 2;
		}
	}

	matrix_multiply(a,b,1000,1000,1000);

	return 0;
}

