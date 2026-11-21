// FUN_00519fb0  00519fb0

void FUN_00519fb0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  
  iVar2 = FUN_00520d60();
  if (*(char *)(DAT_007947e0 + 0x4f34) == '\0') {
    local_10 = param_1;
  }
  else {
    local_10 = param_1 + 8;
  }
  iVar1 = iVar2 + 4 + local_10 * 0x688;
  *(int *)(iVar1 + 0x3f0) = *(int *)(iVar1 + 0x3f0) + param_2;
  FUN_005209d0(iVar2);
  return;
}

