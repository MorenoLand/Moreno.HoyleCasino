// FUN_004c6b30  004c6b30

void __fastcall FUN_004c6b30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005dcb00(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(iVar1 + 0x4cc) = *(undefined4 *)(param_1 + 0x68);
  iVar1 = FUN_005dcb00(*(undefined4 *)(param_1 + 4));
  *(int *)(iVar1 + 0x4c4) = *(int *)(iVar1 + 0x4c4) + *(int *)(param_1 + 0x68);
  return;
}

