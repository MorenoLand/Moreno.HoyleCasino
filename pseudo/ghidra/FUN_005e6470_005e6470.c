// FUN_005e6470  005e6470

undefined4 __fastcall FUN_005e6470(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) % DAT_0075e87c;
  return uVar1;
}

