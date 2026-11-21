// FUN_005b5730  005b5730

undefined4 __fastcall FUN_005b5730(undefined4 param_1)

{
  int iVar1;
  int local_18;
  undefined4 local_14 [4];
  
  local_14[0] = 2;
  local_14[1] = 0;
  local_14[2] = 1;
  local_14[3] = 3;
  local_18 = 0;
  while( true ) {
    if (3 < local_18) {
      return 0xffffffff;
    }
    iVar1 = FUN_005dcb00(local_14[local_18],param_1);
    if ((*(char *)(iVar1 + 0x4a0) != '\0') &&
       (iVar1 = FUN_005b4e50(local_14[local_18]), iVar1 != -1)) break;
    local_18 = local_18 + 1;
  }
  return local_14[local_18];
}

