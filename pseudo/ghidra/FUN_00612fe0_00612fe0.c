// FUN_00612fe0  00612fe0

undefined1 __thiscall FUN_00612fe0(int param_1,int param_2)

{
  undefined1 local_c;
  
  if ((((*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) &&
       (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))) &&
      (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) &&
     (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))) {
    local_c = 1;
  }
  else {
    local_c = 0;
  }
  return local_c;
}

