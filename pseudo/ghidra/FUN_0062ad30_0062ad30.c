// FUN_0062ad30  0062ad30

undefined4 __fastcall FUN_0062ad30(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x18) < 1) {
    uVar1 = 0;
  }
  else {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -4;
    uVar1 = **(undefined4 **)(param_1 + 0x1c);
  }
  return uVar1;
}

