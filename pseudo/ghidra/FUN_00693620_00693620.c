// FUN_00693620  00693620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00693620(int *param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = param_1[9];
  FUN_00693760(param_2,iVar4,param_1[10]);
  iVar4 = (*(int *)param_1[5] - (iVar4 >> 1)) - param_1[7];
  if (1 < *param_1) {
    do {
      iVar2 = param_1[7];
      fVar1 = *(float *)(param_2 + iVar4 * 4);
      iVar3 = iVar4;
      if (*(float *)(param_1[1] + 0x20) < fVar1) {
        fVar1 = *(float *)(param_1[1] + 0x20);
      }
      while (iVar3 = iVar3 + 1,
            iVar3 <= (*(int *)(param_1[5] + 4 + iVar5 * 4) + *(int *)(param_1[5] + iVar5 * 4) >> 1)
                     - iVar2) {
        iVar4 = iVar4 + 1;
        if (((_DAT_006e57b0 < *(float *)(param_2 + iVar4 * 4)) &&
            (*(float *)(param_2 + iVar4 * 4) < fVar1)) || (fVar1 == _DAT_006e57b0)) {
          fVar1 = *(float *)(param_2 + iVar4 * 4);
        }
      }
      if (iVar5 < *param_1) {
        do {
          if (iVar2 + iVar4 < *(int *)(param_1[5] + iVar5 * 4)) break;
          if (*(float *)(param_3 + iVar5 * 4) < fVar1) {
            *(float *)(param_3 + iVar5 * 4) = fVar1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *param_1);
      }
    } while (iVar5 + 1 < *param_1);
  }
  fVar1 = *(float *)(param_2 + -4 + param_1[10] * 4);
  if (iVar5 < *param_1) {
    do {
      if (*(float *)(param_3 + iVar5 * 4) < fVar1) {
        *(float *)(param_3 + iVar5 * 4) = fVar1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *param_1);
  }
  return;
}

