// FUN_005eeef0  005eeef0

int __fastcall FUN_005eeef0(int param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  for (local_8 = 0; *(char *)(*(int *)(param_1 + 0x5c) + local_8) != '\0'; local_8 = local_8 + 1) {
    if (*(char *)(*(int *)(param_1 + 0x5c) + local_8) == '\n') {
      local_c = local_c + 1;
    }
  }
  return (int)*(short *)(param_1 + 0x96) + *(short *)(param_1 + 0x96) * local_c;
}

