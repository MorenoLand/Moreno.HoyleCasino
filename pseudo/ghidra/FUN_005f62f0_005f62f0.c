// FUN_005f62f0  005f62f0

void __thiscall FUN_005f62f0(int param_1,char param_2)

{
  char cVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (((*(char *)(param_1 + 0x50) != param_2) &&
      (*(char *)(param_1 + 0x50) = param_2, *(int *)(param_1 + 0x28) != 0)) &&
     (cVar1 = FUN_005f54a0(), cVar1 != '\0')) {
    if (*(char *)(param_1 + 0x58) == '\0') {
      local_8 = *(int *)(param_1 + 0x1c);
      local_c = *(int *)(param_1 + 0x18);
      local_10 = *(int *)(param_1 + 0x14);
      local_14 = *(int *)(param_1 + 0x10);
    }
    else {
      local_8 = *(int *)(param_1 + 0x1c) + 1;
      local_c = *(int *)(param_1 + 0x18) + 1;
      local_10 = *(int *)(param_1 + 0x14) + -1;
      local_14 = *(int *)(param_1 + 0x10) + -1;
    }
    FUN_005f9500(&local_14);
  }
  return;
}

