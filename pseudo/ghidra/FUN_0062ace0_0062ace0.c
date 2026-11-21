// FUN_0062ace0  0062ace0

undefined4 __fastcall FUN_0062ace0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
    uVar1 = **(undefined4 **)(param_1 + 0x1c);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

