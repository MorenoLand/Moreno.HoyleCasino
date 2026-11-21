// FUN_0054c170  0054c170

int * __thiscall
FUN_0054c170(undefined4 param_1,int *param_2,int param_3,short param_4,short param_5)

{
  short local_10;
  
  local_10 = 0;
  param_3 = param_3 + -0x13b3;
  switch(param_3) {
  case 0:
    if (param_4 < 0x13) {
      if (param_4 < 0x11) {
        if (param_4 < 0xf) {
          if (param_4 < 0xd) {
            FUN_005e9f20("false","..\\Casino\\videoblackjackstate.cpp",0x686,param_3,param_1);
          }
          else {
            local_10 = 3;
          }
        }
        else {
          local_10 = 2;
        }
      }
      else {
        local_10 = 1;
      }
    }
    else {
      local_10 = 0;
    }
    break;
  case 1:
    if (param_4 < 0x11) {
      if (param_4 < 0xd) {
        if (param_4 == 0xc) {
          local_10 = 2;
        }
        else if (param_4 < 4) {
          FUN_005e9f20("false","..\\Casino\\videoblackjackstate.cpp",0x6ad,param_3,param_1);
        }
        else {
          local_10 = 3;
        }
      }
      else {
        local_10 = 1;
      }
    }
    else {
      local_10 = 0;
    }
    break;
  case 2:
    if (param_4 < 0x13) {
      if (param_4 == 0x12) {
        local_10 = 1;
      }
      else if (param_4 < 0xc) {
        FUN_005e9f20("false","..\\Casino\\videoblackjackstate.cpp",0x6a1,param_3,param_1);
      }
      else {
        local_10 = 2;
      }
    }
    else {
      local_10 = 0;
    }
    break;
  case 3:
    local_10 = 0xb - param_4 / 2;
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\videoblackjackstate.cpp",0x6b0,param_3,param_1);
    break;
  case 5:
    if (param_4 == 0xc) {
      local_10 = 0;
    }
    else if (param_4 == 0xb) {
      local_10 = 1;
    }
    else if (param_4 == 10) {
      local_10 = 2;
    }
    else if (param_4 == 9) {
      local_10 = 3;
    }
    else if (param_4 == 8) {
      local_10 = 4;
    }
    else {
      FUN_005e9f20("false","..\\Casino\\videoblackjackstate.cpp",0x694,param_3,param_1);
    }
  }
  *param_2 = (short)(param_5 + -2) * 0xe;
  param_2[1] = local_10 * 0x12;
  return param_2;
}

