// FUN_00529820  00529820

void FUN_00529820(int *param_1,undefined4 param_2,undefined1 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  CPane *this;
  CSize *pCVar5;
  undefined8 local_c;
  
  local_c = FUN_0064c8a0(0,0);
  iVar2 = (**(code **)(*DAT_00793370 + 0x2b0))();
  iVar3 = FUN_00528000();
  if (iVar3 == 0) {
    return;
  }
  FUN_00528000();
  piVar4 = (int *)FUN_0063aac0();
  if (*piVar4 != 2) {
    piVar4 = (int *)FUN_0063aac0();
    if (*piVar4 != 3) {
      bVar1 = false;
      goto LAB_005298b8;
    }
  }
  bVar1 = true;
LAB_005298b8:
  if (((bVar1) && (*param_1 == 0)) && (param_1[1] == 0)) {
    pCVar5 = (CSize *)&local_c;
    this = (CPane *)FUN_00528000();
    CPane::GetMinSize(this,pCVar5);
    if ((int)local_c < iVar2) {
      param_3 = 0;
    }
  }
  FUN_005cba10(param_1,param_2,param_3);
  return;
}

