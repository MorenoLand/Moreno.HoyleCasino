// FUN_00445e80  00445e80

undefined4 __thiscall FUN_00445e80(int param_1,int param_2)

{
  return *(undefined4 *)
          (param_1 + param_2 * 0x78 + 0x54 + *(int *)(param_1 + 0x44 + param_2 * 0x78) * 8);
}

