// FUN_00693760  00693760

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_00693760(float *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  int iStack_2c;
  float fStack_28;
  int *local_c;
  float *local_8;
  
  fStack_28 = 9.662635e-39;
  pfVar5 = (float *)(&stack0xffffffdc + param_3 * -8);
  (&fStack_28)[-param_3] = 9.662655e-39;
  iVar2 = 0;
  iVar3 = 0;
  if (0 < param_3) {
    local_8 = param_1;
    do {
      if (1 < iVar2) {
        pfVar6 = &fStack_28 + param_3 * -2 + iVar2;
        for (local_c = &iStack_2c + (iVar2 - param_3);
            (((*pfVar6 <= *local_8 && (iVar3 < (int)pfVar6[param_3] + param_2)) && (1 < iVar2)) &&
            ((*pfVar6 < pfVar6[-1] != (*pfVar6 == pfVar6[-1]) && (iVar3 < *local_c + param_2))));
            local_c = local_c + -1) {
          iVar2 = iVar2 + -1;
          pfVar6 = pfVar6 + -1;
        }
      }
      *(int *)(&stack0xffffffdc + iVar2 * 4 + param_3 * -4) = iVar3;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 1;
      (&fStack_28)[param_3 * -2 + iVar2] = *local_8;
      local_8 = local_8 + 1;
    } while (iVar3 < param_3);
  }
  iVar3 = 0;
  local_c = (int *)0x0;
  if (0 < iVar2) {
    piVar4 = (int *)(&stack0xffffffe0 + param_3 * -4);
    do {
      if ((iVar2 + -1 <= (int)local_c) || ((float)piVar4[-param_3] <= *pfVar5)) {
        iVar1 = piVar4[-1] + 1 + param_2;
      }
      else {
        iVar1 = *piVar4;
      }
      if (param_3 < iVar1) {
        iVar1 = param_3;
      }
      for (; iVar3 < iVar1; iVar3 = iVar3 + 1) {
        param_1[iVar3] = *pfVar5;
      }
      piVar4 = piVar4 + 1;
      local_c = (int *)((int)local_c + 1);
      pfVar5 = pfVar5 + 1;
    } while ((int)local_c < iVar2);
  }
  return;
}

