// FUN_0041a260  0041a260

undefined4 FUN_0041a260(void)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_var;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 0;
    }
    cVar1 = FUN_00419eb0(local_8);
    if (cVar1 != '\0') break;
    iVar2 = FUN_005dcb00(local_8,extraout_var);
    if (*(char *)(iVar2 + 0x4a0) != '\0') {
      return 1;
    }
    local_8 = local_8 + 1;
  }
  return 1;
}

