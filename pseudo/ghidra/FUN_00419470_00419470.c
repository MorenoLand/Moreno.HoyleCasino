// FUN_00419470  00419470

undefined4 __thiscall FUN_00419470(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 4) {
    uVar1 = CONCAT31((int3)((uint)(param_1 + param_4) >> 8),
                     *(char *)(param_1 + param_4 + 0x4b6) != '\0');
  }
  else {
    param_4 = param_1 + 4 + param_2 * 0x118 + param_4;
    uVar1 = CONCAT31((int3)((uint)param_4 >> 8),*(char *)(param_3 * 0x16 + 0xb0 + param_4) != '\0');
  }
  return uVar1;
}

