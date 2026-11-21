// FUN_005f4ed0  005f4ed0

void __thiscall FUN_005f4ed0(int *param_1,int param_2)

{
  int iVar1;
  
  if ((*(uint *)(param_2 + 0x1c) & 8) == 0) {
    if ((*(uint *)(param_2 + 0x1c) & 0x10) != 0) {
      *(undefined1 *)((int)param_1 + 9) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 2) = 1;
    if (*(char *)((int)param_1 + 10) != '\0') {
      iVar1 = (**(code **)(*param_1 + 0x4c))();
      param_1[0xb] = *(int *)(param_2 + 8) - iVar1;
      iVar1 = (**(code **)(*param_1 + 0x54))();
      param_1[0xc] = *(int *)(param_2 + 0xc) - iVar1;
    }
  }
  return;
}

