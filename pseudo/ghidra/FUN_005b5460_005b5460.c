// FUN_005b5460  005b5460

undefined4 __fastcall FUN_005b5460(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int local_18;
  undefined4 local_14 [4];
  
  cVar1 = FUN_005b6630(param_1);
  if (((cVar1 != '\0') && (iVar2 = FUN_005b5f60(4,0,1), iVar2 == 1)) &&
     (iVar2 = FUN_005b5830(4,0xffffffff), iVar2 == 2)) {
    local_14[0] = 2;
    local_14[1] = 0;
    local_14[2] = 1;
    local_14[3] = 3;
    local_18 = 0;
    while( true ) {
      if (3 < local_18) {
        return 0xffffffff;
      }
      iVar2 = FUN_005dcb00(local_14[local_18]);
      if (((*(char *)(iVar2 + 0x4a0) != '\0') &&
          (cVar1 = FUN_005b33e0(local_14[local_18]), cVar1 != '\0')) &&
         ((cVar1 = FUN_005b8520(local_14[local_18]), cVar1 == '\0' &&
          (iVar2 = FUN_005dcb00(local_14[local_18]), *(char *)(iVar2 + 0x4a2) == '\0')))) break;
      FUN_005b73c0(local_14[local_18],1);
      local_18 = local_18 + 1;
    }
    return local_14[local_18];
  }
  return 0xffffffff;
}

