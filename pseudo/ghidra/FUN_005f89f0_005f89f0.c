// FUN_005f89f0  005f89f0

void __thiscall FUN_005f89f0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x16c) = param_2;
  if (*(int *)(param_1 + 0x16c) == 0) {
    FUN_005f41c0(0);
  }
  else {
    FUN_005f41c0(param_1);
  }
  return;
}

