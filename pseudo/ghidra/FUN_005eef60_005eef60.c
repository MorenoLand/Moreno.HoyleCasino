// FUN_005eef60  005eef60

int __fastcall FUN_005eef60(int param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_10 = 0;
  for (local_8 = 0; *(char *)(*(int *)(param_1 + 0x5c) + local_8) != '\0'; local_8 = local_8 + 1) {
    if (*(char *)(*(int *)(param_1 + 0x5c) + local_8) == '\n') {
      if (local_c < local_10) {
        local_c = local_10;
      }
      local_10 = 0;
    }
    else {
      if (*(char *)(*(int *)(param_1 + 0x5c) + 1 + local_8) == '\0') {
        local_18 = 0xffffffff;
      }
      else {
        local_18 = (uint)*(byte *)(*(int *)(param_1 + 0x5c) + 1 + local_8);
      }
      iVar1 = FUN_005ee950(*(undefined1 *)(*(int *)(param_1 + 0x5c) + local_8),local_18);
      local_10 = (iVar1 - (uint)*(ushort *)(param_1 + 0x90)) + (int)*(short *)(param_1 + 0x94) +
                 *(int *)(param_1 + 0xa8) + local_10;
    }
  }
  if (local_c < local_10) {
    local_c = local_10;
  }
  return local_c;
}

