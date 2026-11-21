// FUN_006437d0  006437d0

void __thiscall FUN_006437d0(int param_1,char param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_8;
  
  iVar2 = *(int *)(param_1 + 0x80c);
  while (local_8 = iVar2 + -1, 0 < local_8) {
    if (param_3 == 0) {
      local_10 = FUN_0062fbf0(iVar2);
    }
    else {
      local_10 = FUN_006146a0(iVar2);
    }
    uVar1 = *(undefined2 *)(param_1 + 4 + local_10 * 2);
    *(undefined2 *)(param_1 + 4 + local_10 * 2) = *(undefined2 *)(param_1 + 4 + local_8 * 2);
    *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
    iVar2 = local_8;
  }
  if (param_2 != '\0') {
    FUN_006436a0(*(int *)(param_1 + 0x80c) + -1);
  }
  return;
}

