// FUN_00453830  00453830

undefined4 __thiscall FUN_00453830(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_8;
  
  if (*(char *)(param_1 + 0x2c2) == '\0') {
    uVar1 = 0;
  }
  else {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      iVar2 = FUN_0044f6c0(*(undefined2 *)(param_2 + local_8 * 2));
      if ((iVar2 != *(int *)(param_1 + 0x2d0)) &&
         (iVar2 = FUN_0044f6c0(*(undefined2 *)(param_2 + local_8 * 2)), iVar2 != -1)) {
        return 0;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

