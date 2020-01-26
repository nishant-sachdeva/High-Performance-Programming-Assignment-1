#include<stdio.h>
#include<stdlib.h>

typedef struct Matrix
{
	int matrix[1000][1000];
}Matrix;


Matrix * matrix_multiply(Matrix *lParm1,Matrix *lParm2,int iParm3,int iParm4,int iParm5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Ma *pvVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int *local_20;
  int *local_18;
  
  pvVar4 = malloc(sizeof(Matrix));
  local_48 = 0;
  while (local_48 < iParm3) {
    local_44 = 0;
    while (local_44 < iParm4) {
      local_40 = 0;
      while (local_40 < iParm5) {
        iVar2 = iParm3 - local_48;
        if (0x1f < iVar2) {
          iVar2 = 0x20;
        }
        local_3c = 0;
        while (local_3c < iVar2) {
          iVar3 = iParm4 - local_44;
          if (0x1f < iVar3) {
            iVar3 = 0x20;
          }
          local_38 = 0;
          while (local_38 < iVar3) {
            iVar1 = *(int *)(lParm1 + ((long)(local_44 + local_38) +
                                      (long)(local_48 + local_3c) * 1000) * 4);
            local_20 = (int *)((long)pvVar4 +
                              ((long)(local_48 + local_3c) * 1000 + (long)local_40) * 4);
            local_18 = (int *)(lParm2 + ((long)(local_44 + local_38) * 1000 + (long)local_40) * 4);
            if (iParm5 - local_40 < 0x21) {
              local_34 = 0;
              while (local_34 < iParm5 - local_40) {
                *local_20 = *local_20 + *local_18 * iVar1;
                local_34 = local_34 + 1;
                local_20 = local_20 + 1;
                local_18 = local_18 + 1;
              }
            }
            else {
              *local_20 = *local_20 + *local_18 * iVar1;
              local_20[1] = local_20[1] + local_18[1] * iVar1;
              local_20[2] = local_20[2] + local_18[2] * iVar1;
              local_20[3] = local_20[3] + local_18[3] * iVar1;
              local_20[4] = local_20[4] + local_18[4] * iVar1;
              local_20[5] = local_20[5] + local_18[5] * iVar1;
              local_20[6] = local_20[6] + local_18[6] * iVar1;
              local_20[7] = local_20[7] + local_18[7] * iVar1;
              local_20[8] = local_20[8] + local_18[8] * iVar1;
              local_20[9] = local_20[9] + local_18[9] * iVar1;
              local_20[10] = local_20[10] + local_18[10] * iVar1;
              local_20[0xb] = local_20[0xb] + local_18[0xb] * iVar1;
              local_20[0xc] = local_20[0xc] + local_18[0xc] * iVar1;
              local_20[0xd] = local_20[0xd] + local_18[0xd] * iVar1;
              local_20[0xe] = local_20[0xe] + local_18[0xe] * iVar1;
              local_20[0xf] = local_20[0xf] + local_18[0xf] * iVar1;
              local_20[0x10] = local_20[0x10] + local_18[0x10] * iVar1;
              local_20[0x11] = local_20[0x11] + local_18[0x11] * iVar1;
              local_20[0x12] = local_20[0x12] + local_18[0x12] * iVar1;
              local_20[0x13] = local_20[0x13] + local_18[0x13] * iVar1;
              local_20[0x14] = local_20[0x14] + local_18[0x14] * iVar1;
              local_20[0x15] = local_20[0x15] + local_18[0x15] * iVar1;
              local_20[0x16] = local_20[0x16] + local_18[0x16] * iVar1;
              local_20[0x17] = local_20[0x17] + local_18[0x17] * iVar1;
              local_20[0x18] = local_20[0x18] + local_18[0x18] * iVar1;
              local_20[0x19] = local_20[0x19] + local_18[0x19] * iVar1;
              local_20[0x1a] = local_20[0x1a] + local_18[0x1a] * iVar1;
              local_20[0x1b] = local_20[0x1b] + local_18[0x1b] * iVar1;
              local_20[0x1c] = local_20[0x1c] + local_18[0x1c] * iVar1;
              local_20[0x1d] = local_20[0x1d] + local_18[0x1d] * iVar1;
              local_20[0x1e] = local_20[0x1e] + local_18[0x1e] * iVar1;
              local_20[0x1f] = local_20[0x1f] + local_18[0x1f] * iVar1;
            }
            local_38 = local_38 + 1;
          }
          local_3c = local_3c + 1;
        }
        local_40 = local_40 + 0x20;
      }
      local_44 = local_44 + 0x20;
    }
    local_48 = local_48 + 0x20;
  }
  return pvVar4;
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

    for(int i =  0;i < 5;i++){
        printf("%d\n",res->matrix[i][4]);
    }
    return 0;
}

