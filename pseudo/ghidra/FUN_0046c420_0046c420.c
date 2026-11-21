// FUN_0046c420  0046c420

void __fastcall FUN_0046c420(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x1dc) == '\0') {
    if (*(int *)(*(int *)(param_1 + 0x1e0) + 0x220) < *(int *)(*(int *)(param_1 + 0x1e0) + 0x21c)) {
      *(int *)(*(int *)(param_1 + 0x1e0) + 0x220) = *(int *)(*(int *)(param_1 + 0x1e0) + 0x220) + 1;
      *(undefined1 *)(param_1 + 0x1dc) = 1;
      uVar1 = FUN_00630f40("SID_POKER_DISCARD");
      (**(code **)(**(int **)(*(int *)(param_1 + 0x1e0) + 500) + 0xb4))(uVar1);
      (**(code **)(**(int **)(*(int *)(param_1 + 0x1e0) + 0x208) + 0x74))();
    }
  }
  else {
    *(int *)(*(int *)(param_1 + 0x1e0) + 0x220) = *(int *)(*(int *)(param_1 + 0x1e0) + 0x220) + -1;
    *(undefined1 *)(param_1 + 0x1dc) = 0;
    uVar1 = FUN_00630f40("SID_POKER_HOLD");
    (**(code **)(**(int **)(*(int *)(param_1 + 0x1e0) + 500) + 0xb4))(uVar1);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x1e0) + 0x208) + 0x70))();
  }
  FUN_00519a40(1);
  return;
}

