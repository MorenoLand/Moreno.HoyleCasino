// FUN_0041b0a0  0041b0a0

void __thiscall FUN_0041b0a0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int local_18;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_3 == -1) {
    if (param_2 == -1) {
      param_3 = -1;
    }
    else {
      if (param_2 == 4) {
        local_18 = 0;
      }
      else {
        local_18 = (int)*(char *)(param_1 + 0x119 + param_2 * 0x118);
      }
      param_3 = local_18;
    }
  }
  *(undefined1 *)(param_1 + 0x10c + param_2 * 0x118 + param_3) = 1;
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x468 + param_2 * 4) + 0x48 + param_2 * 0x20);
  local_c = *puVar1;
  local_8 = puVar1[1];
  (**(code **)(**(int **)(param_1 + 0x468 + param_2 * 4) + 0xc4))(&local_c,param_3,0);
  return;
}

