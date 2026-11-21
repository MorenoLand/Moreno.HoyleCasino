// FUN_00407de0  00407de0

uint FUN_00407de0(int param_1)

{
  char cVar1;
  uint uVar2;
  int local_10;
  int local_8;
  
  uVar2 = param_1 * 3;
  local_8 = 0;
  do {
    if (2 < local_8) {
      return uVar2 & 0xffffff00;
    }
    for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
      cVar1 = FUN_005cb7d0(param_1,0);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar2 = 0;
    }
    local_8 = local_8 + 1;
  } while( true );
}

