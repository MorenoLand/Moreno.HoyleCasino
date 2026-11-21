// FUN_00460b00  00460b00

undefined1 __thiscall FUN_00460b00(int param_1,int param_2)

{
  undefined1 local_5;
  
  local_5 = 0;
  if ((0 < *(int *)(param_1 + 8 + param_2 * 0x10)) ||
     (0 < *(int *)(param_1 + 0x10 + param_2 * 0x10))) {
    local_5 = 1;
  }
  return local_5;
}

