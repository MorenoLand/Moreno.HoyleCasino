// FUN_005d6f90  005d6f90

undefined4 __fastcall FUN_005d6f90(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int local_28;
  int local_24 [8];
  
  local_24[0] = 5000;
  local_24[1] = 10000;
  local_24[2] = 50000;
  local_24[3] = 100000;
  local_24[4] = 1000000;
  local_24[5] = 100000000;
  local_24[6] = 1000000000;
  local_24[7] = FUN_005d52e0(param_1);
  iVar2 = FUN_005d52e0();
  local_28 = *(char *)(iVar2 + 0x2a) + 1;
  cVar1 = FUN_005d6c60();
  if (((cVar1 == '\0') || (iVar2 = FUN_005d52e0(param_1), *(char *)(iVar2 + 0x29) != '\0')) ||
     (iVar2 = FUN_005d52e0(param_1), *(char *)(iVar2 + 0x2a) == '\a')) {
    return 0;
  }
  do {
    iVar2 = FUN_005d5a50();
    if ((iVar2 < local_24[local_28]) || (7 < local_28)) break;
    local_28 = local_28 + 1;
  } while (local_28 != 7);
  if (7 < local_28) {
    local_28 = 7;
  }
  FUN_005d7090(local_28 + -1);
  FUN_0063b0a0();
  return 1;
}

