// FUN_00521900  00521900

undefined4 __thiscall FUN_00521900(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 6;
  }
  else if (param_2 == 0x25) {
    uVar1 = 7;
  }
  else if (param_2 == 0x9d) {
    uVar1 = 9;
  }
  else if (param_2 == 0x85) {
    uVar1 = 0xc;
  }
  else if ((param_2 < 1) || (0x24 < param_2)) {
    if ((param_2 < 0x26) || (0x62 < param_2)) {
      if ((param_2 < 99) || (0x6e < param_2)) {
        if ((param_2 < 0x6f) || (0x84 < param_2)) {
          if ((param_2 < 0x86) || (0x90 < param_2)) {
            if ((param_2 < 0x91) || (0x96 < param_2)) {
              if ((param_2 < 0x97) || (0x9c < param_2)) {
                FUN_005e9f20("false","..\\Casino\\rouletteai.cpp",0x16d,param_1);
                uVar1 = 0;
              }
              else {
                uVar1 = 0xf;
              }
            }
            else {
              uVar1 = 0xe;
            }
          }
          else {
            uVar1 = 0xd;
          }
        }
        else {
          uVar1 = 0xb;
        }
      }
      else {
        uVar1 = 10;
      }
    }
    else {
      uVar1 = 8;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

