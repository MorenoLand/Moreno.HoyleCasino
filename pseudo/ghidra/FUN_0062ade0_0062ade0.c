// FUN_0062ade0  0062ade0

undefined4 __thiscall FUN_0062ade0(int param_1,int param_2)

{
  undefined4 local_c;
  
  if (param_2 < *(int *)(param_1 + 8)) {
    local_c = *(undefined4 *)(*(int *)(param_1 + 0xc) + param_2 * 4);
  }
  else {
    local_c = 0;
  }
  return local_c;
}

