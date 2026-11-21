// FUN_005c8e20  005c8e20

void __thiscall FUN_005c8e20(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_005c8f70();
  if (param_3 == '\0') {
    if (*(int *)(*(int *)(param_1 + 0x10) + 8) + 1 < param_2) {
      param_2 = *(int *)(*(int *)(param_1 + 0x10) + 8) + 1;
    }
    if (param_2 <= *(int *)(param_1 + 0xc)) {
      *(int *)(param_1 + 0xc) = param_2 + -1;
    }
  }
  else {
    if (*(int *)(*(int *)(param_1 + 0x10) + 8) < param_2) {
      param_2 = *(int *)(*(int *)(param_1 + 0x10) + 8);
    }
    if (*(int *)(param_1 + 0xc) < param_2) {
      *(int *)(param_1 + 0xc) = param_2;
    }
  }
  FUN_005c8ed0(iVar1 / iVar2);
  return;
}

