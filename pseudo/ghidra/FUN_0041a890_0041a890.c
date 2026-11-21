// FUN_0041a890  0041a890

int __fastcall FUN_0041a890(int param_1)

{
  char cVar1;
  int iVar2;
  int local_18 [5];
  
  local_18[0] = 2;
  local_18[1] = 0;
  local_18[2] = 1;
  local_18[3] = 3;
  local_18[4] = 0;
  do {
    if (3 < local_18[4]) {
      return -1;
    }
    iVar2 = FUN_005dcb00(local_18[local_18[4]]);
    if (*(char *)(iVar2 + 0x4a0) != '\0') {
      iVar2 = local_18[local_18[4]];
      if (iVar2 == -1) {
        cVar1 = -1;
      }
      else if (iVar2 == 4) {
        cVar1 = '\0';
      }
      else {
        cVar1 = *(char *)(param_1 + 0x119 + iVar2 * 0x118);
      }
      if (cVar1 != -1) {
        return local_18[local_18[4]];
      }
    }
    local_18[4] = local_18[4] + 1;
  } while( true );
}

