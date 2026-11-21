// FUN_00612af0  00612af0

int FUN_00612af0(int param_1,int param_2,int param_3)

{
  undefined4 local_14;
  
  local_14 = param_2;
  while (param_1 != local_14) {
    local_14 = local_14 + -0x48;
    FUN_00610650(local_14);
  }
  return param_3 + ((param_2 - param_1) / 0x48) * -0x48;
}

