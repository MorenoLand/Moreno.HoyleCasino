// FUN_00424470  00424470

void FUN_00424470(int param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 local_c;
  
  local_c = FUN_0064c8a0(0,0);
  if (*(int *)(DAT_00790358 + 0xa0) != param_1) {
    return;
  }
  FUN_005dcb00(param_1);
  piVar3 = (int *)FUN_0063aac0();
  if (*piVar3 != 2) {
    piVar3 = (int *)FUN_0063aac0();
    if (*piVar3 != 3) {
      bVar1 = false;
      goto LAB_004244f8;
    }
  }
  bVar1 = true;
LAB_004244f8:
  if (bVar1) {
    cVar2 = FUN_004272e0(param_1);
    if (cVar2 == '\0') {
      FUN_004265a0(param_1,&local_c);
      FUN_005dcb00(param_1);
      iVar4 = FUN_005d5a50();
      iVar5 = (**(code **)(*DAT_00790354 + 0x2b0))();
      if (iVar5 * 3 <= iVar4 + -1) {
        FUN_005dcb00(param_1);
        iVar4 = FUN_005d5a50();
        if ((int)local_c * 2 <= iVar4 + -1) {
          FUN_00426620(param_1);
          FUN_0041f9c0(param_1);
          return;
        }
      }
      uVar6 = FUN_00630f40("SID_CARIBBEANSTUD_INVALIDBET",0);
      uVar6 = FUN_00630f40("SID_CARIBBEANSTUD_NOTENOUGHMONEY",uVar6);
      FUN_0062ff10(uVar6);
    }
  }
  return;
}

