// FUN_0041d5a0  0041d5a0

int * __thiscall
FUN_0041d5a0(undefined4 param_1,int *param_2,int param_3,short param_4,short param_5)

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
            FUN_005e9f20("false","..\\Casino\\blackjackstate.cpp",0x75e,param_3,param_1);
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
          FUN_005e9f20("false","..\\Casino\\blackjackstate.cpp",0x788,param_3,param_1);
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
        FUN_005e9f20("false","..\\Casino\\blackjackstate.cpp",0x77c,param_3,param_1);
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
    if (param_4 == 0xc) {
      local_10 = 0;
    }
    else {
      local_10 = 0xb - param_4 / 2;
    }
    break;
  case 4:
    if (param_4 < 0x11) {
      if (param_4 == 0x10) {
        local_10 = 1;
      }
      else if (param_4 == 0xf) {
        local_10 = 2;
      }
      else if (param_4 == 0xe) {
        local_10 = 3;
      }
      else {
        FUN_005e9f20("false","..\\Casino\\blackjackstate.cpp",0x752,param_3,param_1);
      }
    }
    else {
      local_10 = 0;
    }
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
      FUN_005e9f20("false","..\\Casino\\blackjackstate.cpp",0x76c,param_3,param_1);
    }
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\blackjackstate.cpp",0x78b,param_3,param_1);
  }
  *param_2 = (short)(param_5 + -2) * 0xe;
  param_2[1] = local_10 * 0x12;
  return param_2;
}

