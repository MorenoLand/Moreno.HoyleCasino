// FUN_00628db0  00628db0

undefined4 __fastcall FUN_00628db0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  iVar2 = (**(code **)(*param_1 + 0xb8))();
  iVar3 = (**(code **)(*param_1 + 0xbc))();
  if (iVar2 == iVar3) {
    iVar2 = FUN_0060c9a0();
    iVar3 = (**(code **)(*param_1 + 0xbc))();
    if (iVar2 < iVar3) {
      return 1;
    }
    for (local_8 = 0; iVar2 = (**(code **)(*param_1 + 0xbc))(), local_8 < iVar2;
        local_8 = local_8 + 1) {
      FUN_0060ca40(local_8);
      cVar1 = FUN_005f54c0();
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

