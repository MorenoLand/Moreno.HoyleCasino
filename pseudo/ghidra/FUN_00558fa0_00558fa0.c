// FUN_00558fa0  00558fa0

undefined4 __fastcall FUN_00558fa0(int param_1)

{
  undefined4 uVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  if (*(char *)(DAT_00793428 + 0x19) == '.') {
    uVar1 = FUN_005573f0();
  }
  else if (*(char *)(DAT_00793428 + 0x19) == '\x17') {
    uVar1 = FUN_005574b0(0);
  }
  else if (*(char *)(DAT_00793428 + 0x19) == '\t') {
    uVar1 = FUN_005574b0(1);
  }
  else if (*(char *)(DAT_00793428 + 0x19) == '\"') {
    uVar1 = FUN_005577e0(0);
  }
  else if (*(char *)(DAT_00793428 + 0x19) == '\n') {
    uVar1 = FUN_005577e0(1);
  }
  else {
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      if (*(short *)(param_1 + 0x18 + local_10 * 2) != 0) {
        local_8 = local_8 + 1;
      }
      if (*(char *)(DAT_00793428 + local_10 + 0x14) != -1) {
        local_c = local_c + 1;
      }
    }
    if (local_8 == local_c) {
      for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
        if (*(short *)(param_1 + 0x18 + local_10 * 2) != 0) {
          local_14 = 0;
          while ((local_14 < 5 &&
                 ((*(char *)(DAT_00793428 + local_14 + 0x14) == -1 ||
                  (*(short *)(param_1 + 0x22 + *(char *)(DAT_00793428 + local_14 + 0x14) * 2) !=
                   *(short *)(param_1 + 0x18 + local_10 * 2)))))) {
            local_14 = local_14 + 1;
          }
          if (local_14 == 5) {
            return 0;
          }
        }
      }
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

