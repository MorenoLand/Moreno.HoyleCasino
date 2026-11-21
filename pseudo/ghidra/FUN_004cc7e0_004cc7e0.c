// FUN_004cc7e0  004cc7e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cc7e0(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  undefined8 local_c;
  
  local_c = _DAT_006b2c38;
  switch(param_3) {
  case 1:
    break;
  case 2:
    local_c = _DAT_006b2c40;
    break;
  case 3:
    local_c = 0x3ff0000000000000;
    break;
  case 4:
    local_c = _DAT_006b3e40;
    break;
  case 5:
    local_c = _DAT_006bf7d8;
  }
  FUN_004c6250(param_2,0xffffffff,0,local_c,param_1,0);
  return;
}

