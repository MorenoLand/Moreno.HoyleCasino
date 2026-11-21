// FUN_0062ac90  0062ac90

undefined4 __fastcall FUN_0062ac90(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) < 1) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    uVar1 = 0;
  }
  else {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 8) + -1;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x18) * 4;
    uVar1 = **(undefined4 **)(param_1 + 0x1c);
  }
  return uVar1;
}

