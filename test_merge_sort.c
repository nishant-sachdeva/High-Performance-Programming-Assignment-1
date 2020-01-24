void merge_sort(undefined8 uParm1,ulong uParm2,uint uParm3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)uParm2;
  if ((int)uParm3 <= iVar1) {
    return;
  }
  uVar2 = ((int)((uParm3 - iVar1 >> 0x1f) + (uParm3 - iVar1)) >> 1) + iVar1;
  merge_sort(uParm1,uParm2,(ulong)uVar2);
  merge_sort(uParm1,(ulong)(uVar2 + 1),(ulong)uParm3);
  merge(uParm1,uParm2 & 0xffffffff,(ulong)uVar2,(ulong)uParm3);
  return;
}



void merge(long lParm1,int iParm2,int iParm3,int iParm4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long in_FS_OFFSET;
  undefined8 uStack64;
  int aiStack56 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = iParm3 - iParm2;
  iVar8 = uVar9 + 1;
  iParm4 = iParm4 - iParm3;
  lVar3 = -((long)iVar8 * 4 + 0x12U & 0xfffffffffffffff0);
  lVar4 = -((long)iParm4 * 4 + 0x12U & 0xfffffffffffffff0);
  puVar7 = (undefined4 *)((long)aiStack56 + lVar4 + lVar3);
  if (iVar8 < 1) {
    if (iParm4 < 1) {
      iVar10 = 0;
      goto LAB_001008dc;
    }
LAB_00100847:
    iParm3 = iParm3 + 1;
    iVar10 = iParm3 + iParm4;
    do {
      *puVar7 = *(undefined4 *)(lParm1 + (long)iParm3 * 4);
      iParm3 = iParm3 + 1;
      puVar7 = puVar7 + 1;
    } while (iParm3 != iVar10);
    if (iVar8 < 1) {
      iVar10 = 0;
      goto LAB_001008dc;
    }
    iVar5 = 0;
    iVar10 = 0;
    do
    {
      iVar1 = *(int *)((long)aiStack56 + (long)iVar5 * 4 + lVar3);
      iVar2 = *(int *)((long)aiStack56 + (long)iVar10 * 4 + lVar4 + lVar3);
      
      if (iVar2 < iVar1)
      {
        *(int *)(lParm1 + (long)iParm2 * 4) = iVar2;
        iVar10 = iVar10 + 1;
      }

      else
      {
        *(int *)(lParm1 + (long)iParm2 * 4) = iVar1;
        iVar5 = iVar5 + 1;
      }
      iParm2 = iParm2 + 1;
    } while ((iVar5 < iVar8) && (iVar10 < iParm4));
    if (iVar8 <= iVar5) goto LAB_001008dc;
  }
  else {
    lVar6 = 0;
    do {
      *(undefined4 *)((long)aiStack56 + lVar6 * 4 + lVar3) =
           *(undefined4 *)(lParm1 + (long)(iParm2 + (int)lVar6) * 4);
      lVar6 = lVar6 + 1;
    } while (lVar6 != (ulong)uVar9 + 1);
    if (0 < iParm4) goto LAB_00100847;
    iVar5 = 0;
    iVar10 = 0;
  }
  puVar7 = (undefined4 *)((long)aiStack56 + (long)iVar5 * 4 + lVar3);
  iVar8 = uVar9 + 1 + iParm2;
  do {
    *(undefined4 *)(lParm1 + (long)iParm2 * 4) = *puVar7;
    iParm2 = iParm2 + 1;
    puVar7 = puVar7 + 1;
  } while (iParm2 != iVar8 - iVar5);
LAB_001008dc:
  if (iVar10 < iParm4) {
    puVar7 = (undefined4 *)((long)aiStack56 + (long)iVar10 * 4 + lVar4 + lVar3);
    iVar8 = (iParm4 - iVar10) + iParm2;
    do {
      *(undefined4 *)(lParm1 + (long)iParm2 * 4) = *puVar7;
      iParm2 = iParm2 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar8 != iParm2);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)&uStack64 + lVar4 + lVar3) = 0x100943;
  __stack_chk_fail();
}