// FUN_00426260  00426260

void __thiscall FUN_00426260(int param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  if (*(int *)(param_1 + 0xa0) == -1) {
    FUN_005d8a20(0,0xffffffff,0);
  }
  else {
    FUN_005d8a20(1,param_2,param_3);
  }
  return;
}

