// FUN_00519f20  00519f20

void FUN_00519f20(int param_1,char param_2)

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
  *(int *)(iVar1 + 0x3ec) = *(int *)(iVar1 + 0x3ec) + 1;
  if (param_2 != '\0') {
    *(int *)(iVar1 + 1000) = *(int *)(iVar1 + 1000) + 1;
  }
  FUN_005209d0(iVar2);
  return;
}

