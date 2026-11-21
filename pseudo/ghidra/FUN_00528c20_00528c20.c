// FUN_00528c20  00528c20

undefined1 __thiscall FUN_00528c20(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x13 < local_8) {
      return 0;
    }
    iVar1 = FUN_00528bd0(param_1);
    if (*(int *)(&DAT_00724110 + local_8 * 4 + iVar1 * 0x50) == -1) break;
    iVar1 = FUN_00528bd0(param_1);
    if (*(int *)(&DAT_00724110 + local_8 * 4 + iVar1 * 0x50) == param_2) {
      return 1;
    }
    local_8 = local_8 + 1;
  }
  return 0;
}

