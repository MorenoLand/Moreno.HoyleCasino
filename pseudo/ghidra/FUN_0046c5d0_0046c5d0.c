// FUN_0046c5d0  0046c5d0

void __fastcall FUN_0046c5d0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x1dc) == '\0') {
    if (*(int *)(*(int *)(param_1 + 0x1e0) + 0x220) < *(int *)(*(int *)(param_1 + 0x1e0) + 0x21c)) {
      *(int *)(*(int *)(param_1 + 0x1e0) + 0x220) = *(int *)(*(int *)(param_1 + 0x1e0) + 0x220) + 1;
      *(undefined1 *)(param_1 + 0x1dc) = 1;
      uVar1 = FUN_00630f40("SID_POKER_DISCARD");
      (**(code **)(**(int **)(*(int *)(param_1 + 0x1e0) + 0x1f8) + 0xb4))(uVar1);
      (**(code **)(**(int **)(*(int *)(param_1 + 0x1e0) + 0x20c) + 0x74))();
    }
  }
  else {
    *(int *)(*(int *)(param_1 + 0x1e0) + 0x220) = *(int *)(*(int *)(param_1 + 0x1e0) + 0x220) + -1;
    *(undefined1 *)(param_1 + 0x1dc) = 0;
    uVar1 = FUN_00630f40("SID_POKER_HOLD");
    (**(code **)(**(int **)(*(int *)(param_1 + 0x1e0) + 0x1f8) + 0xb4))(uVar1);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x1e0) + 0x20c) + 0x70))();
  }
  FUN_00519a40(2);
  return;
}

