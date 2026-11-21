// FUN_00408790  00408790

uint __fastcall FUN_00408790(undefined4 param_1)

{
  uint in_EAX;
  undefined4 uVar1;
  int *piVar2;
  uint local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < (int)local_8) {
      return in_EAX & 0xffffff00;
    }
    uVar1 = FUN_005dcb00(local_8,param_1);
    piVar2 = (int *)FUN_0063aac0(param_1,uVar1);
    if (*piVar2 == 1) break;
    in_EAX = local_8 + 1;
    local_8 = in_EAX;
  }
  return 1;
}

