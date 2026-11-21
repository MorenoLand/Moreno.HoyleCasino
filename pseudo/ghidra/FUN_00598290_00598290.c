// FUN_00598290  00598290

undefined4 __fastcall FUN_00598290(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
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
    piVar2 = (int *)FUN_0063aac0();
    if ((((*piVar2 != 0) &&
         (iVar3 = FUN_005dcb00(local_14[local_18],param_1), *(char *)(iVar3 + 0x4a1) == '\0')) &&
        (cVar1 = FUN_005984d0(local_14[local_18]), cVar1 == '\0')) &&
       (cVar1 = FUN_00599020(local_14[local_18]), cVar1 != '\0')) break;
    local_18 = local_18 + 1;
  }
  return local_14[local_18];
}

