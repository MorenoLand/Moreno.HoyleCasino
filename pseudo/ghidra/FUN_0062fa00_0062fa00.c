// FUN_0062fa00  0062fa00

void __thiscall FUN_0062fa00(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0xc)) {
    if (*(int *)(param_1 + 0xc) == 0) {
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) << 1;
    FUN_0062faa0();
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar2 + iVar1 * 8) = param_2;
  *(undefined4 *)(iVar2 + 4 + iVar1 * 8) = param_3;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

