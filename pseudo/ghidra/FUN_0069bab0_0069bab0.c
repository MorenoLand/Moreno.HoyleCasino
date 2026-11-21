// FUN_0069bab0  0069bab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0069bab0(int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_28;
  int local_24;
  
  iVar5 = *param_1;
  iVar7 = 0;
  iVar9 = 0;
  iVar1 = param_1[param_2 * 8 + -7];
  iVar10 = 0;
  iVar8 = 0;
  iVar6 = 0;
  local_28 = 0;
  local_24 = 0;
  if (0 < param_2) {
    param_1 = param_1 + 3;
    do {
      iVar7 = iVar7 + param_1[-1];
      iVar9 = iVar9 + *param_1;
      iVar10 = iVar10 + param_1[1];
      iVar8 = iVar8 + param_1[3];
      iVar6 = iVar6 + param_1[4];
      param_1 = param_1 + 8;
      param_2 = param_2 + -1;
      local_28 = iVar7;
      local_24 = iVar9;
    } while (param_2 != 0);
  }
  iVar7 = *param_3;
  if (-1 < iVar7) {
    local_24 = local_24 + iVar7;
    local_28 = local_28 + iVar5;
    iVar10 = iVar10 + iVar5 * iVar5;
    iVar8 = iVar8 + iVar7 * iVar5;
    iVar6 = iVar6 + 1;
  }
  iVar7 = *param_4;
  if (-1 < iVar7) {
    local_28 = local_28 + iVar1;
    local_24 = local_24 + iVar7;
    iVar10 = iVar10 + iVar1 * iVar1;
    iVar8 = iVar8 + iVar7 * iVar1;
    iVar6 = iVar6 + 1;
  }
  if (iVar6 == 0) {
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    dVar4 = (double)local_28;
    dVar2 = _DAT_006b2c48 / ((double)iVar10 * (double)iVar6 - dVar4 * dVar4);
    dVar3 = ((double)iVar10 * (double)local_24 - (double)iVar8 * dVar4) * dVar2;
    dVar2 = ((double)iVar6 * (double)iVar8 - (double)local_24 * dVar4) * dVar2;
    floor((double)iVar5 * dVar2 + dVar3 + _DAT_006b2c38);
    iVar5 = ftol();
    *param_3 = iVar5;
    floor((double)iVar1 * dVar2 + dVar3 + _DAT_006b2c38);
    iVar5 = ftol();
    *param_4 = iVar5;
    if (0x3ff < *param_3) {
      *param_3 = 0x3ff;
    }
    if (0x3ff < *param_4) {
      *param_4 = 0x3ff;
    }
    if (*param_3 < 0) {
      *param_3 = 0;
    }
    if (*param_4 < 0) {
      *param_4 = 0;
      return;
    }
  }
  return;
}

