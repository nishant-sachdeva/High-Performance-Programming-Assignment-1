#include<stdio.h>
#include<stdlib.h>
#include <x86intrin.h>

typedef struct Matrix
{
    int matrix[1000][1000];
}Matrix;

Matrix *matrix_multiply(Matrix *a,Matrix *b,int p,int q,int r)
{
    register Matrix *result;
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

    //int **a_poi = (int **)a->matrix;
    //printf("%d\n",**a_poi);

    register long j = 0;
    register long i = 0;
    register long k = 0;

    do{
        register int *b_sub = b->matrix[j];
        i = 0;
        do{
            register int *result_point = (int *)result->matrix[i];
            //va = _mm256_loadu_ps(a->matrix+(i*p)+j);
            register int df = a->matrix[i][j];
            k = 0;
            do{
                if(k <= r - 20) {
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
                    k += 20;
                }
                else if(k <= r-5){

                    result_point[k] += df*b_sub[k];
                    result_point[k+1] += df*b_sub[k+1];
                    result_point[k+2] += df*b_sub[k+2];
                    result_point[k+3] += df*b_sub[k+3];
                    result_point[k+4] += df*b_sub[k+4];

                    k += 5;

                }
                else{
                    result_point[k] += df*b_sub[k];
                    k++;
                }
            }while(k < r);
            i++;
         }while(i < p);
         j++;
     }while(j < q);
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

    //for(int i =  0;i < 5;i++){
        //printf("%d\n",res->matrix[i][4]);
    //}
    return 0;
}

