// FUN_005fb1b0  005fb1b0

undefined4 __thiscall FUN_005fb1b0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_8;
  
  iVar1 = FUN_0060c9a0(param_1);
  local_8 = 0;
  while( true ) {
    if (iVar1 <= local_8) {
      return 0;
    }
    FUN_0060ca40(local_8);
    iVar2 = FUN_005f5400();
    if (iVar2 == param_2) break;
    local_8 = local_8 + 1;
  }
  uVar3 = FUN_0060ca40(local_8);
  return uVar3;
}

