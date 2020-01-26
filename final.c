#include<stdio.h>
#include<stdlib.h>

typedef struct Matrix
{
	int matrix[1000][1000];
}Matrix;


void matrix_multiply(long param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  Matrix auVar4 [16];
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  long lVar14;
  uint uVar15;
  Matrix auVar16 [16];
  Matrix auVar17 [16];
  Matrix auVar18 [16];
  long local_60;
  long local_58;
  int *local_48;
  int local_40;
  
  piVar6 = (int *)malloc(4000000);
  if (((0 < param_4) && (0 < param_3)) && (0 < param_5)) {
    local_58 = 0;
    local_40 = 0;
    local_60 = param_1;
    local_48 = param_2;
    do {
      lVar10 = 0;
      iVar11 = 0;
      lVar14 = (long)local_40 * 1000;
      piVar13 = piVar6;
      do {
        uVar7 = -(int)((ulong)piVar13 >> 2) & 3;
        iVar5 = *(int *)(local_60 + lVar10 * 4);
        if (param_5 - 1U < uVar7 + 3) {
          iVar12 = 0;
LAB_0010095f:
          lVar9 = (long)iVar11 * 1000;
          iVar1 = iVar12 + 1;
          piVar6[lVar9 + (long)iVar12] =
               piVar6[lVar9 + (long)iVar12] + param_2[(long)iVar12 + lVar14] * iVar5;
          if (iVar1 < param_5) {
            iVar2 = iVar12 + 2;
            piVar6[lVar9 + (long)iVar1] =
                 piVar6[lVar9 + (long)iVar1] + param_2[(long)iVar1 + lVar14] * iVar5;
            if (iVar2 < param_5) {
              iVar1 = iVar12 + 3;
              piVar6[lVar9 + (long)iVar2] =
                   piVar6[lVar9 + (long)iVar2] + param_2[(long)iVar2 + lVar14] * iVar5;
              if (iVar1 < param_5) {
                iVar2 = iVar12 + 4;
                piVar6[lVar9 + (long)iVar1] =
                     piVar6[lVar9 + (long)iVar1] + param_2[(long)iVar1 + lVar14] * iVar5;
                if (iVar2 < param_5) {
                  iVar12 = iVar12 + 5;
                  piVar6[lVar9 + (long)iVar2] =
                       piVar6[lVar9 + (long)iVar2] + param_2[(long)iVar2 + lVar14] * iVar5;
                  if (iVar12 < param_5) {
                    piVar6[lVar9 + (long)iVar12] =
                         piVar6[lVar9 + (long)iVar12] + iVar5 * param_2[(long)iVar12 + lVar14];
                  }
                }
              }
            }
          }
        }
        else {
          iVar12 = 0;
          if (uVar7 != 0) {
            iVar12 = 1;
            *piVar13 = *piVar13 + *local_48 * iVar5;
            if (uVar7 != 1) {
              iVar12 = 2;
              piVar13[1] = piVar13[1] + local_48[1] * iVar5;
              if (uVar7 == 3) {
                iVar12 = 3;
                piVar13[2] = piVar13[2] + local_48[2] * iVar5;
              }
            }
          }
          uVar15 = param_5 - uVar7;
          piVar3 = piVar6 + (ulong)uVar7 + lVar10;
          uVar8 = 0;
          lVar9 = 0;
          auVar18 = psrlq(CONCAT412(iVar5,CONCAT48(iVar5,CONCAT44(iVar5,iVar5))),0x20);
          do {
                    /* WARNING: Load size is inaccurate */
            auVar4 = *(Matrix *)((long)param_2 + lVar9 + ((ulong)uVar7 + local_58) * 4);
            uVar8 = uVar8 + 1;
            auVar16 = psrlq(auVar4,0x20);
            auVar16 = pmuludq(auVar16,auVar18);
            auVar17 = pmuludq(auVar4,CONCAT412(iVar5,CONCAT48(iVar5,CONCAT44(iVar5,iVar5))));
                    /* WARNING: Load size is inaccurate */
            auVar4 = *(Matrix *)((long)piVar3 + lVar9);
            *(int *)((long)piVar3 + lVar9) = SUB164(auVar4,0) + SUB164(auVar17,0);
            *(int *)((long)piVar3 + lVar9 + 4) = SUB164(auVar4 >> 0x20,0) + SUB164(auVar16,0);
            *(int *)((long)piVar3 + lVar9 + 8) =
                 SUB164(auVar4 >> 0x40,0) + SUB164(auVar17 >> 0x40,0);
            *(int *)((long)piVar3 + lVar9 + 0xc) =
                 SUB164(auVar4 >> 0x60,0) + SUB164(auVar16 >> 0x40,0);
            lVar9 = lVar9 + 0x10;
          } while (uVar8 < uVar15 >> 2);
          iVar12 = iVar12 + (uVar15 & 0xfffffffc);
          if (uVar15 != (uVar15 & 0xfffffffc)) goto LAB_0010095f;
        }
        iVar11 = iVar11 + 1;
        piVar13 = piVar13 + 1000;
        lVar10 = lVar10 + 1000;
      } while (param_3 != iVar11);
      local_40 = local_40 + 1;
      local_60 = local_60 + 4;
      local_58 = local_58 + 1000;
      local_48 = local_48 + 1000;
    } while (param_4 != local_40);
  }
  return;
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

