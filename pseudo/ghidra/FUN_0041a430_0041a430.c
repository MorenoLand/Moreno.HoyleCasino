// FUN_0041a430  0041a430

int __fastcall FUN_0041a430(int param_1)

{
  char cVar1;
  int iVar2;
  int local_18 [5];
  
  local_18[0] = 2;
  local_18[1] = 0;
  local_18[2] = 1;
  local_18[3] = 3;
  cVar1 = FUN_00418540();
  if (((cVar1 != '\0') && (iVar2 = FUN_00419780(4,0,1), iVar2 == 1)) &&
     (iVar2 = FUN_00419530(4,0xffffffff), iVar2 == 2)) {
    local_18[4] = 0;
    while( true ) {
      if (3 < local_18[4]) {
        return -1;
      }
      iVar2 = FUN_005dcb00(local_18[local_18[4]]);
      if (((*(char *)(iVar2 + 0x4a0) != '\0') &&
          (cVar1 = FUN_0041a610(local_18[local_18[4]]), cVar1 != '\0')) &&
         ((*(char *)(param_1 + 0x11a + local_18[local_18[4]] * 0x118) == '\0' &&
          (iVar2 = FUN_005dcb00(local_18[local_18[4]]), *(char *)(iVar2 + 0x4a2) == '\0')))) break;
      *(undefined1 *)(param_1 + 0x11a + local_18[local_18[4]] * 0x118) = 1;
      local_18[4] = local_18[4] + 1;
    }
    return local_18[local_18[4]];
  }
  return -1;
}

