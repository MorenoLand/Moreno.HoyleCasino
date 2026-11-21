// FUN_004f6e70  004f6e70

int __fastcall FUN_004f6e70(int param_1)

{
  int iVar1;
  short local_8;
  
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x331);
  }
  if (*(char *)(param_1 + 3) == '\0') {
    FUN_005e9f20("bShowdownInProgress","..\\Casino\\PokerPot.cpp",0x332);
  }
  if (*(short *)(param_1 + 0x2e) == -1) {
    for (local_8 = 0; local_8 < *(short *)(param_1 + 6); local_8 = local_8 + 1) {
      if (((*(char *)(*(int *)(param_1 + 0x30) + (int)local_8) == '\0') &&
          (*(int *)(*(int *)(param_1 + 0x68) + local_8 * 4) == *(int *)(param_1 + 0x24))) &&
         (*(int *)(*(int *)(param_1 + 0x6c) + local_8 * 4) == *(int *)(param_1 + 0x28))) {
        if (*(short *)(param_1 + 0x2e) == -1) {
          *(short *)(param_1 + 0x2e) = local_8;
        }
        else if (*(short *)(*(int *)(param_1 + 0x4c) + *(short *)(param_1 + 0x2e) * 2) <
                 *(short *)(*(int *)(param_1 + 0x4c) + local_8 * 2)) {
          *(short *)(param_1 + 0x2e) = local_8;
        }
      }
    }
  }
  local_8 = *(short *)(param_1 + 0x2e);
  if (*(char *)(*(int *)(param_1 + 0x3c) + (int)*(short *)(param_1 + 0x2e)) == '\0') {
    iVar1 = CONCAT22((short)((uint)*(int *)(param_1 + 0x3c) >> 0x10),*(undefined2 *)(param_1 + 0x2e)
                    );
  }
  else {
    do {
      local_8 = local_8 + 1;
      if (local_8 == *(short *)(param_1 + 6)) {
        local_8 = 0;
      }
    } while ((local_8 != *(short *)(param_1 + 0x2e)) &&
            ((((*(char *)(*(int *)(param_1 + 0x30) + (int)local_8) != '\0' ||
               (*(char *)(*(int *)(param_1 + 0x3c) + (int)local_8) != '\0')) ||
              (*(int *)(*(int *)(param_1 + 0x68) + local_8 * 4) != *(int *)(param_1 + 0x24))) ||
             (*(int *)(*(int *)(param_1 + 0x6c) + local_8 * 4) != *(int *)(param_1 + 0x28)))));
    if (local_8 == *(short *)(param_1 + 0x2e)) {
      iVar1 = CONCAT22(local_8 >> 0xf,0xffff);
    }
    else {
      iVar1 = (int)local_8;
    }
  }
  return iVar1;
}

