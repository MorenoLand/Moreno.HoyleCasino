// FUN_005e2860  005e2860

void __thiscall FUN_005e2860(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_8;
  
  iVar2 = FUN_005e10d0();
  local_8 = 0;
  local_18 = 0;
  local_14 = 0;
  if (*param_2 < '\x04') {
    for (local_10 = 0; (local_10 < 0x14 && (param_2[local_10 + 5] != '\0')); local_10 = local_10 + 1
        ) {
      local_8 = local_8 + 1;
    }
    for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
      for (local_20 = 0; local_20 < local_8; local_20 = local_20 + 1) {
        if (param_2[local_20 + 5] == *(char *)(param_1 + 0x9c + iVar2 * 0x14 + local_10)) {
          local_18 = local_18 + 1;
        }
      }
    }
    FUN_005e7e00(0,9,local_18);
  }
  else {
    cVar1 = *param_2;
    if (cVar1 == '\x04') {
      for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
        if ((((('\x01' < *(char *)(param_1 + 0x9c + iVar2 * 0x14 + local_10)) &&
              (*(char *)(param_1 + 0x9c + iVar2 * 0x14 + local_10) < '\n')) ||
             ((int)*(char *)(param_1 + 0x9c + iVar2 * 0x14 + local_10) % 10 == 1)) ||
            ((int)*(char *)(param_1 + 0x9c + iVar2 * 0x14 + local_10) % 10 == 0)) ||
           (('G' < *(char *)(param_1 + 0x9c + iVar2 * 0x14 + local_10) &&
            (*(char *)(param_1 + 0x9c + iVar2 * 0x14 + local_10) < 'P')))) {
          local_18 = local_18 + 1;
        }
      }
      FUN_005e7e00(0,9,local_18);
    }
    else if (cVar1 == '\x05') {
      for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
        if (*(char *)(param_1 + 0x9c + iVar2 * 0x14 + local_10) < ')') {
          local_18 = local_18 + 1;
        }
        else {
          local_14 = local_14 + 1;
        }
      }
      iVar2 = abs(local_18 - local_14);
      FUN_005e7e00(0,9,iVar2);
    }
    else if (cVar1 == '\x06') {
      for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
        if (((int)*(char *)(param_1 + 0x9c + iVar2 * 0x14 + local_10) % 10 < 1) ||
           (5 < (int)*(char *)(param_1 + 0x9c + iVar2 * 0x14 + local_10) % 10)) {
          local_14 = local_14 + 1;
        }
        else {
          local_18 = local_18 + 1;
        }
      }
      iVar2 = abs(local_18 - local_14);
      FUN_005e7e00(0,9,iVar2);
    }
  }
  FUN_005e15b0((int)*param_2,local_8,local_18,param_2[3] != '\0',(int)param_2[1]);
  return;
}

