// FUN_004f9580  004f9580

int __fastcall FUN_004f9580(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_8;
  
  local_18 = 0;
  local_10 = 0;
  for (local_8 = 0; local_8 < *(short *)(param_1 + 6); local_8 = local_8 + 1) {
    if (((*(char *)(*(int *)(param_1 + 0x30) + (int)local_8) == '\0') &&
        (*(char *)(*(int *)(param_1 + 0x3c) + (int)local_8) == '\0')) &&
       ((local_18 < *(int *)(*(int *)(param_1 + 0x68) + local_8 * 4) ||
        (local_10 < *(int *)(*(int *)(param_1 + 0x6c) + local_8 * 4))))) {
      local_18 = *(int *)(*(int *)(param_1 + 0x68) + local_8 * 4);
      local_10 = *(int *)(*(int *)(param_1 + 0x6c) + local_8 * 4);
    }
  }
  local_14 = *(int *)(param_1 + 0x28) - local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - local_14;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - local_14;
  for (local_8 = 0; local_8 < *(short *)(param_1 + 6); local_8 = local_8 + 1) {
    if (*(char *)(*(int *)(param_1 + 0x3c) + (int)local_8) != '\0') {
      *(undefined4 *)(*(int *)(param_1 + 0x70) + local_8 * 4) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x74) + local_8 * 4) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x78) + local_8 * 4) = 0;
    }
    if (local_18 < *(int *)(*(int *)(param_1 + 0x68) + local_8 * 4)) {
      *(int *)(param_1 + 0xc) =
           *(int *)(param_1 + 0xc) - (*(int *)(*(int *)(param_1 + 0x68) + local_8 * 4) - local_18);
      local_14 = (*(int *)(*(int *)(param_1 + 0x68) + local_8 * 4) - local_18) + local_14;
      *(int *)(*(int *)(param_1 + 0x68) + local_8 * 4) = local_18;
    }
    if ((*(char *)(*(int *)(param_1 + 0x30) + (int)local_8) == '\0') &&
       (local_10 < *(int *)(*(int *)(param_1 + 0x6c) + local_8 * 4))) {
      *(int *)(*(int *)(param_1 + 0x6c) + local_8 * 4) = local_10;
    }
  }
  return local_14;
}

