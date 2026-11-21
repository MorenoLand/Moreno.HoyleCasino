// FUN_005a3ad0  005a3ad0

void __thiscall FUN_005a3ad0(int param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 0xec) = param_2;
  if (*(int *)(param_1 + 0xec) == -1) {
    FUN_005d8a20(0,0xffffffff,0);
  }
  else {
    FUN_005d8a20(1,param_2,param_3);
  }
  return;
}

