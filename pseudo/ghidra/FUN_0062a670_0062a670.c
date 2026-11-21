// FUN_0062a670  0062a670

void __thiscall FUN_0062a670(int param_1,int param_2,int param_3)

{
  undefined4 local_c;
  
  *(int *)(param_1 + 0x5c) = param_2;
  if (*(int *)(param_1 + 0x5c) < param_3) {
    local_c = param_3;
  }
  else {
    local_c = param_2;
  }
  *(int *)(param_1 + 0x60) = local_c;
  return;
}

