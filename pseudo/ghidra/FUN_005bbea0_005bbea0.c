// FUN_005bbea0  005bbea0

int FUN_005bbea0(int param_1,int param_2,int param_3)

{
  undefined4 local_130;
  
  local_130 = param_2;
  while (param_1 != local_130) {
    local_130 = local_130 + -0x10;
    FUN_005bc040(local_130);
  }
  return param_3 + (param_2 - param_1 >> 4) * -0x10;
}

