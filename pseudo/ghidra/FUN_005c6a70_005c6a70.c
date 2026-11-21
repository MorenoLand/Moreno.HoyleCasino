// FUN_005c6a70  005c6a70

int FUN_005c6a70(int param_1,int param_2,int param_3)

{
  undefined4 local_14;
  
  local_14 = param_2;
  while (param_1 != local_14) {
    local_14 = local_14 + -0x34;
    FUN_005c3a20(local_14);
  }
  return param_3 + ((param_2 - param_1) / 0x34) * -0x34;
}

