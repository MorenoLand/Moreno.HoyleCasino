// FUN_0043b3f0  0043b3f0

int __fastcall FUN_0043b3f0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  CPane *this;
  undefined8 uVar4;
  CSize *pCVar5;
  undefined8 local_14;
  int local_c;
  int local_8;
  
  local_8 = -1;
  local_14 = FUN_0064c8a0(1000000000,0,param_1);
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    uVar2 = FUN_005dcb00(local_c);
    piVar3 = (int *)FUN_0063aac0(param_1,uVar2);
    if (*piVar3 != 0) {
      FUN_005dcb00(local_c);
      cVar1 = FUN_005d58d0();
      if (cVar1 != '\0') {
        uVar4 = local_14;
        FUN_005dcb00(local_c,local_14);
        cVar1 = FUN_0064c6a0(uVar4);
        if (cVar1 != '\0') {
          pCVar5 = (CSize *)&local_14;
          this = (CPane *)FUN_005dcb00(local_c);
          CPane::GetMinSize(this,pCVar5);
          local_8 = local_c;
        }
      }
    }
  }
  return local_8;
}

