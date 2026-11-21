// FUN_0062ac30  0062ac30

undefined4 __fastcall FUN_0062ac30(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0x14)) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = **(undefined4 **)(param_1 + 0x1c);
  }
  return uVar1;
}

