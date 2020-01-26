#include<stdio.h>
#include<stdlib.h>
#include <x86intrin.h>
#include <string.h>
#include <time.h>

typedef struct Matrix
{
    int matrix[1000][1000];
}Matrix;

Matrix *matrix_multiply(Matrix *a,Matrix *b,int p,int q,int r)
{
    Matrix *result;
    result = malloc(sizeof(Matrix));
    
    register int j = 0;
    register int i = 0;
    register int k = 0;
    register int df;
    register int *result_point = result->matrix[0];
    memset(result_point,0,p*r*sizeof(int));

    do
    {
        i = 0;
        do
        {
            register int *b_sub = b->matrix[i];
            result_point = result->matrix[j];
            //va = _mm256_loadu_ps(a->matrix+(i*p)+j);
            df = a->matrix[j][i];
            do
            {
                *result_point++ += df*(*b_sub++);
                *result_point++ += df*(*b_sub++);
                *result_point++ += df*(*b_sub++);
                *result_point++ += df*(*b_sub++);
                *result_point++ += df*(*b_sub++);
                *result_point++ += df*(*b_sub++);
                *result_point++ += df*(*b_sub++);
                *result_point++ += df*(*b_sub++);
                *result_point++ += df*(*b_sub++);
                *result_point++ += df*(*b_sub++);
                *result_point++ += df*(*b_sub++);
                *result_point++ += df*(*b_sub++);
                *result_point++ += df*(*b_sub++);
                *result_point++ += df*(*b_sub++);
                *result_point++ += df*(*b_sub++);
                *result_point++ += df*(*b_sub++);
                *result_point++ += df*(*b_sub++);
                *result_point++ += df*(*b_sub++);
                *result_point++ += df*(*b_sub++);
                *result_point++ += df*(*b_sub++);
                k += 20;
            }while(k < r-20);

            while(k < r){
                *result_point++ += df*(*b_sub++);
                k++;
            }

            i++;
        }while(i < q);

        j++;

    }while(j < p);

    return result;
}

int main()
{
    
    return 0;
}

