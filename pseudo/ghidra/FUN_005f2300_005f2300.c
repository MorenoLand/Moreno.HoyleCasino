// FUN_005f2300  005f2300

undefined4 __thiscall FUN_005f2300(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_0060c9a0(param_1);
    if (iVar1 <= local_8) {
      return 0;
    }
    iVar1 = FUN_0060ca40(local_8);
    if (*(int *)(iVar1 + 0x1c4) == param_2) break;
    local_8 = local_8 + 1;
  }
  uVar2 = FUN_0060ca40(local_8);
  return uVar2;
}

