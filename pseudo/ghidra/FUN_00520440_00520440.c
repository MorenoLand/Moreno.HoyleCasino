// FUN_00520440  00520440

void FUN_00520440(int param_1)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = FUN_00520d60();
  if (*(char *)(DAT_007947e0 + 0x4f34) == '\0') {
    local_c = param_1;
  }
  else {
    local_c = param_1 + 8;
  }
  *(int *)(iVar1 + 0x3e4 + local_c * 0x688) = *(int *)(iVar1 + 0x3e4 + local_c * 0x688) + 1;
  return;
}

