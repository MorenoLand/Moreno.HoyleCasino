// FUN_0068eae0  0068eae0

void __fastcall FUN_0068eae0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0068f690();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x45) = 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 4);
  **(undefined4 **)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(*(int *)(param_1 + 4) + 8) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

