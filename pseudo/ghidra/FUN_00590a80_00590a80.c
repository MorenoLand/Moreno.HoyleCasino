// FUN_00590a80  00590a80

void __fastcall FUN_00590a80(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x1dc) == '\0') {
    if (*(int *)(*(int *)(param_1 + 0x1e4) + 0x1f0) < *(int *)(*(int *)(param_1 + 0x1e4) + 0x1ec)) {
      *(int *)(*(int *)(param_1 + 0x1e4) + 0x1f0) = *(int *)(*(int *)(param_1 + 0x1e4) + 0x1f0) + 1;
      *(undefined1 *)(param_1 + 0x1dc) = 1;
      uVar1 = FUN_00630f40("SID_POKER_DISCARD");
      (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x1e4) + 0x1e4) +
                           *(int *)(param_1 + 0x1e0) * 0x1d0) + 0xb4))(uVar1);
      (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x1e4) + 0x1e8) +
                           *(int *)(param_1 + 0x1e0) * 0x178) + 0x74))();
    }
  }
  else {
    *(int *)(*(int *)(param_1 + 0x1e4) + 0x1f0) = *(int *)(*(int *)(param_1 + 0x1e4) + 0x1f0) + -1;
    *(undefined1 *)(param_1 + 0x1dc) = 0;
    uVar1 = FUN_00630f40("SID_POKER_HOLD");
    (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x1e4) + 0x1e4) +
                         *(int *)(param_1 + 0x1e0) * 0x1d0) + 0xb4))(uVar1);
    (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x1e4) + 0x1e8) +
                         *(int *)(param_1 + 0x1e0) * 0x178) + 0x70))();
  }
  FUN_00519a40(*(int *)(param_1 + 0x1e0) + 1);
  return;
}

