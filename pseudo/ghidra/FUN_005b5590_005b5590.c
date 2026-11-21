// FUN_005b5590  005b5590

undefined4 __fastcall FUN_005b5590(undefined4 param_1)

{
  char cVar1;
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
    cVar1 = FUN_005b60c0(local_14[local_18]);
    if ((cVar1 != '\0') &&
       (iVar2 = FUN_005dcb00(local_14[local_18],param_1), *(char *)(iVar2 + 0x4a2) == '\0')) break;
    local_18 = local_18 + 1;
  }
  return local_14[local_18];
}

