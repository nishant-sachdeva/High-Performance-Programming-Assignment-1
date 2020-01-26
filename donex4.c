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

    //int **a_poi = (int **)a->matrix;
    //printf("%d\n",**a_poi);
    int val1;
    int i  = 0;
    int j = 0;
    int k = 0;
    int z;
    int z1;
    int z2;
    int q1;
    int *res_int;
    int *b_int;
    int itr;
    while(i < p){
        j = 0;
        while(j < q){
            k  = 0;
            while(k < r){
                z = p - i;
                if(z > 31){
                    z = 32;
                }
                z1 = 0;

                while(z1 < z){
                    z2 = q - j;
                    if(z2 > 31){
                        z2 = 32;
                    }

                    q1 = 0;
                    while(q1 < z2){
                        val1 = *(int *)(a->matrix+((long)(j+q1)+(long)(i+z1)*1000)*4);
                        res_int = (int *)(result->matrix+((long)(i+z1)*1000+(long)z)*4);
                        b_int = (int *)(b->matrix+((long)(j+q1)*1000 + (long)k)*4);

                        if(r-k < 33){
                            itr = 0;
                            while(itr < r-k){
                                *res_int += *b_int*val1;
                                itr++;
                                res_int++;
                                b_int++;
                            }

                        }

                        else{
                            *res_int += *b_int*val1;
                            res_int[1] += b_int[1]*val1;
                            res_int[2] += b_int[2]*val1;
                            res_int[3] += b_int[3]*val1;
                            res_int[4] += b_int[4]*val1;
                            res_int[5] += b_int[5]*val1;
                            res_int[6] += b_int[6]*val1;
                            res_int[7] += b_int[7]*val1;
                            res_int[8] += b_int[8]*val1;
                            res_int[9] += b_int[9]*val1;
                            res_int[10] += b_int[10]*val1;
                            res_int[11] += b_int[11]*val1;
                            res_int[12] += b_int[12]*val1;
                            res_int[13] += b_int[13]*val1;
                            res_int[14] += b_int[14]*val1;
                            res_int[15] += b_int[15]*val1;
                            res_int[16] += b_int[16]*val1;
                            res_int[17] += b_int[17]*val1;
                            res_int[18] += b_int[18]*val1;
                            res_int[19] += b_int[19]*val1;
                            res_int[20] += b_int[20]*val1;
                            res_int[21] += b_int[21]*val1;
                            res_int[22] += b_int[22]*val1;
                            res_int[23] += b_int[23]*val1;
                            res_int[24] += b_int[24]*val1;
                            res_int[25] += b_int[25]*val1;
                            res_int[26] += b_int[26]*val1;
                            res_int[27] += b_int[27]*val1;
                            res_int[28] += b_int[28]*val1;
                            res_int[29] += b_int[29]*val1;
                            res_int[30] += b_int[30]*val1;
                            res_int[31] += b_int[31]*val1;
                        }

                        q1++;
                    }
                    z1++;
                }

                k += 32;
            }
            j+= 32;
        }

        i += 32;
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

    //for(int i =  0;i < 5;i++){
        //printf("%d\n",res->matrix[i][4]);
    //}
    return 0;
}

