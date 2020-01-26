#include<stdio.h>
#include<stdlib.h>

typedef struct Matrix
{
	int matrix[1000][1000];
}Matrix;


Matrix * matrix_multiply(Matrix *lParm1,Matrix *lParm2,int iParm3,int iParm4,int iParm5)

{
  void *pvVar1;
  int local_1c;
  int local_18;
  int local_14;
  
  pvVar1 = malloc(4000000);
  local_1c = 0;
  while (local_1c < iParm4) {
    local_18 = 0;
    while (local_18 < iParm3) {
      local_14 = 0;
      while (local_14 < iParm5) {
        *(int *)((long)pvVar1 + ((long)local_14 + (long)local_18 * 1000) * 4) =
             *(int *)((long)pvVar1 + ((long)local_14 + (long)local_18 * 1000) * 4) +
             *(int *)(lParm2 + ((long)local_14 + (long)local_1c * 1000) * 4) *
             *(int *)(lParm1 + ((long)local_1c + (long)local_18 * 1000) * 4);
        local_14 = local_14 + 1;
      }
      local_18 = local_18 + 1;
    }
    local_1c = local_1c + 1;
  }
  return pvVar1;
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

