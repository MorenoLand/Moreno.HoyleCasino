// FUN_005a2460  005a2460

undefined4 __fastcall FUN_005a2460(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
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
    FUN_005dcb00(local_14[local_18],param_1);
    piVar1 = (int *)FUN_0063aac0();
    if (((*piVar1 != 0) &&
        (iVar2 = FUN_005dcb00(local_14[local_18],param_1), *(char *)(iVar2 + 0x4a0) == '\0')) &&
       (iVar2 = FUN_005dcb00(local_14[local_18],param_1), *(char *)(iVar2 + 0x4a1) == '\0')) break;
    local_18 = local_18 + 1;
  }
  return local_14[local_18];
}

