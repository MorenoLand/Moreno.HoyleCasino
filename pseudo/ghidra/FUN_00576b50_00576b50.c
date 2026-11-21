// FUN_00576b50  00576b50

void __fastcall FUN_00576b50(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0062fbf0(8);
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  uVar1 = FUN_0062fbf0(8);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  if (*(int *)(param_1 + 0x80) == *(int *)(param_1 + 0x84)) {
    uVar1 = FUN_0062fbf0(7);
    *(undefined4 *)(param_1 + 0x88) = uVar1;
    if (*(int *)(param_1 + 0x80) <= *(int *)(param_1 + 0x88)) {
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
    }
  }
  else {
    uVar1 = FUN_0062fbf0(8);
    *(undefined4 *)(param_1 + 0x88) = uVar1;
  }
  return;
}

