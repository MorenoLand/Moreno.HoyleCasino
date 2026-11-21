// FUN_00575e80  00575e80

void __thiscall FUN_00575e80(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x78) = param_2;
  if (999999 < *(int *)(param_1 + 0x78)) {
    FUN_005e9f20("false","..\\Casino\\sultanslot.cpp",0x2c1);
    *(undefined4 *)(param_1 + 0x78) = 999999;
  }
  FUN_005777d0(*(undefined4 *)(param_1 + 0x78));
  if (0 < *(int *)(param_1 + 0x78)) {
    FUN_00575c60(*(undefined4 *)(param_1 + 0x78));
  }
  return;
}

