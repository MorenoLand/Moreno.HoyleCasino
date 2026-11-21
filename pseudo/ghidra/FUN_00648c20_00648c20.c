// FUN_00648c20  00648c20

void __fastcall FUN_00648c20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 1;
  iVar1 = FUN_0062fbf0(3);
  *(int *)(param_1 + 0x3c) = iVar1 + 2;
  uVar2 = (**(code **)(**(int **)(DAT_007960d8 + 0xc) + 4))();
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  return;
}

