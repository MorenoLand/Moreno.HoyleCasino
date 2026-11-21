// FUN_006130a0  006130a0

undefined1 __thiscall FUN_006130a0(int param_1,int param_2,int param_3)

{
  undefined1 local_c;
  
  if ((((param_2 < *(int *)(param_1 + 8)) || (*(int *)(param_1 + 0x10) <= param_2)) ||
      (param_3 < *(int *)(param_1 + 0xc))) || (*(int *)(param_1 + 0x14) <= param_3)) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  return local_c;
}

