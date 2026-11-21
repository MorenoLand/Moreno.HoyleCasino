// FUN_0047cc00  0047cc00

int __thiscall FUN_0047cc00(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int local_10;
  int local_8;
  
  local_8 = 0;
  for (local_10 = 0; local_10 < 7; local_10 = local_10 + 1) {
    *(undefined4 *)(param_2 + local_10 * 4) = 0xffffffff;
  }
  for (local_10 = 0; local_10 < 7; local_10 = local_10 + 1) {
    iVar2 = FUN_0047e390(local_10);
    cVar1 = FUN_004c61b0(param_1);
    if (cVar1 == '\0') {
      iVar2 = FUN_005dcb00(*(undefined4 *)(iVar2 + 4));
      if (*(int *)(iVar2 + 0xc) == -1) {
        *(int *)(param_2 + local_8 * 4) = local_10;
        local_8 = local_8 + 1;
      }
    }
  }
  return local_8;
}

