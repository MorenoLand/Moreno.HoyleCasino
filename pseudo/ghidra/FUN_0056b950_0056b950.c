// FUN_0056b950  0056b950

bool FUN_0056b950(int param_1,char param_2)

{
  undefined4 uVar1;
  int local_c;
  
  if (param_2 == '\0') {
    uVar1 = FUN_0056b910();
  }
  else {
    uVar1 = FUN_0056b930();
  }
  switch(uVar1) {
  case 0:
    local_c = 0;
    break;
  default:
    local_c = 4;
    break;
  case 4:
    local_c = 1;
    break;
  case 9:
    local_c = 2;
    break;
  case 0x18:
    local_c = 3;
  }
  return *(int *)(local_c * 0xc4 + 0x7484c0 + param_1 * 4) != 0;
}

