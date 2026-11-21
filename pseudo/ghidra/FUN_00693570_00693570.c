// FUN_00693570  00693570

void FUN_00693570(int param_1,int param_2,float param_3,undefined4 param_4,int param_5,int param_6)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = ftol();
  uVar3 = uVar3 & ((int)uVar3 < 1) - 1;
  if (6 < (int)uVar3) {
    uVar3 = 7;
  }
  iVar1 = *(int *)(param_2 + uVar3 * 4);
  iVar4 = ftol();
  iVar5 = ftol();
  iVar6 = ftol();
  while( true ) {
    if (iVar4 <= iVar6) {
      return;
    }
    if ((0 < iVar5) &&
       (fVar2 = param_3 + *(float *)(iVar1 + 8 + iVar6 * 4), *(float *)(param_1 + iVar5 * 4) < fVar2
       )) {
      *(float *)(param_1 + iVar5 * 4) = fVar2;
    }
    iVar5 = iVar5 + param_6;
    if (param_5 <= iVar5) break;
    iVar6 = iVar6 + 1;
  }
  return;
}

