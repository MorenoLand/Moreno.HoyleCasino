// FUN_005b70e0  005b70e0

void __thiscall FUN_005b70e0(int param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 0x5b8) = param_2;
  if (*(int *)(param_1 + 0x5b8) == -1) {
    FUN_005d8a20(0,0xffffffff,0);
  }
  else {
    FUN_005d8a20(1,*(undefined4 *)(param_1 + 0x5b8),param_3);
  }
  return;
}

