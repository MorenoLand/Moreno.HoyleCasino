// FUN_00520540  00520540

int FUN_00520540(int param_1)

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
  return iVar1 + 4 + local_c * 0x688;
}

