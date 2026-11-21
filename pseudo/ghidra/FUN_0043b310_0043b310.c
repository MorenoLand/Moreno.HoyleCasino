// FUN_0043b310  0043b310

int __fastcall FUN_0043b310(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  CPane *this;
  undefined8 uVar4;
  CSize *pCVar5;
  int local_14;
  undefined8 local_10;
  int local_8;
  
  local_8 = -1;
  local_10 = FUN_0064c8a0(0,0,param_1);
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    uVar2 = FUN_005dcb00(local_14);
    piVar3 = (int *)FUN_0063aac0(param_1,uVar2);
    if (*piVar3 != 0) {
      FUN_005dcb00(local_14);
      cVar1 = FUN_005d5920();
      if (cVar1 != '\0') {
        uVar4 = local_10;
        FUN_005dcb00(local_14,local_10);
        cVar1 = FUN_0064c6e0(uVar4);
        if (cVar1 != '\0') {
          pCVar5 = (CSize *)&local_10;
          this = (CPane *)FUN_005dcb00(local_14);
          CPane::GetMinSize(this,pCVar5);
          local_8 = local_14;
        }
      }
    }
  }
  return local_8;
}

