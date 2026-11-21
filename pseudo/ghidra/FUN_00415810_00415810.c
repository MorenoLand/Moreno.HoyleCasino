// FUN_00415810  00415810

undefined4 FUN_00415810(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_8;
  
  local_8 = 0;
  switch(param_2) {
  case 2000:
    local_8 = FUN_00648330("BJ_HIT");
    break;
  case 0x7d2:
    local_8 = FUN_00648330("BJ_DOUBLE");
    break;
  case 0x7d4:
    local_8 = FUN_00648330("BJ_SPLIT");
    break;
  case 0x7d5:
  case 0x7d6:
  case 0x7d7:
    local_8 = FUN_00648330("BJ_STAND");
    break;
  case 0x7d8:
    local_8 = FUN_00648330("BJ_PASS");
  }
  return local_8;
}

