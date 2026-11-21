// FUN_00599450  00599450

void __thiscall FUN_00599450(int param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 0x104) = param_2;
  if (*(int *)(param_1 + 0x104) == -1) {
    FUN_005d8a20(0,0xffffffff,0);
  }
  else {
    FUN_005d8a20(1,param_2,param_3);
  }
  return;
}

