// FUN_00445e40  00445e40

undefined4 __thiscall FUN_00445e40(int param_1,int param_2)

{
  return *(undefined4 *)
          (param_1 + param_2 * 0x78 + 0x50 + *(int *)(param_1 + 0x44 + param_2 * 0x78) * 8);
}

