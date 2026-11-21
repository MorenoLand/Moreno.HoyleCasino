// FUN_005eebf0  005eebf0

void __thiscall
FUN_005eebf0(int param_1,int param_2,int *param_3,int *param_4,int *param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  uint local_18;
  int local_10;
  int local_8;
  
  local_8 = 0;
  local_10 = 0;
  if (param_6 == 0) {
    param_6 = *(int *)(param_1 + 0x5c);
  }
  if (0 < param_2) {
    for (; *(char *)(param_6 + param_2) == ' '; param_2 = param_2 + 1) {
    }
  }
  *param_3 = param_2;
  *param_4 = param_2 + 1;
  *param_5 = 0;
  while( true ) {
    if (*(char *)(param_6 + param_2) == '\0') {
      return;
    }
    if (*(char *)(param_6 + param_2) == '\x1b') break;
    uVar1 = param_6 + param_2;
    if (*(char *)(uVar1 + 1) == '\0') {
      local_18 = 0xffffffff;
    }
    else {
      uVar1 = (uint)*(byte *)(param_6 + param_2 + 1);
      local_18 = uVar1;
    }
    iVar2 = FUN_005ee950(CONCAT31((int3)(uVar1 >> 8),*(undefined1 *)(param_6 + param_2)),local_18);
    iVar2 = ((*param_5 + iVar2) - (uint)*(ushort *)(param_1 + 0x90)) +
            (int)*(short *)(param_1 + 0x94) + *(int *)(param_1 + 0xa8);
    if (*(char *)(param_6 + param_2) == ' ') {
      local_8 = *param_4;
      local_10 = *param_5;
    }
    if (*(char *)(param_6 + param_2) == '\n') {
      *param_4 = param_2 + 1;
      return;
    }
    if ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x74)) - *(int *)(param_1 + 0x7c) < iVar2) {
      if (local_10 == 0) {
        return;
      }
      *param_4 = local_8;
      *param_5 = local_10;
      return;
    }
    *param_4 = param_2 + 1;
    *param_5 = iVar2;
    param_2 = param_2 + 1;
  }
  return;
}

