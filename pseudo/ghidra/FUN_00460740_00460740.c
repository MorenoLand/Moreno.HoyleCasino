// FUN_00460740  00460740

int __thiscall FUN_00460740(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  local_c = 1;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    if (local_8 != param_2) {
      uVar2 = FUN_005dcb00(local_8);
      piVar3 = (int *)FUN_0063aac0(param_1,uVar2);
      if (*piVar3 != 0) {
        FUN_005dcb00(local_8);
        cVar1 = FUN_005d5840();
        if (cVar1 != '\0') {
          local_c = local_c + 1;
        }
      }
    }
  }
  iVar4 = (**(code **)(*DAT_00790734 + 0x2b4))(param_1);
  return iVar4 * local_c;
}

