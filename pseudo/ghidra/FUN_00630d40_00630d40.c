// FUN_00630d40  00630d40

byte FUN_00630d40(byte param_1)

{
  if ((param_1 < 0xc0) || (0xc5 < param_1)) {
    if ((param_1 < 0xe0) || (0xe5 < param_1)) {
      if ((param_1 < 200) || (0xcb < param_1)) {
        if ((param_1 < 0xe8) || (0xeb < param_1)) {
          if ((param_1 < 0xcc) || (0xcf < param_1)) {
            if ((param_1 < 0xec) || (0xef < param_1)) {
              if ((param_1 < 0xd2) || (0xd6 < param_1)) {
                if ((param_1 < 0xf2) || (0xf6 < param_1)) {
                  if ((param_1 < 0xd9) || (0xdc < param_1)) {
                    if ((param_1 < 0xf9) || (0xfc < param_1)) {
                      if (param_1 == 199) {
                        param_1 = 0x43;
                      }
                      else if (param_1 == 0xe7) {
                        param_1 = 99;
                      }
                      else if (param_1 == 0xd1) {
                        param_1 = 0x4e;
                      }
                      else if (param_1 == 0xf1) {
                        param_1 = 0x6e;
                      }
                      else if (param_1 == 0xdd) {
                        param_1 = 0x59;
                      }
                      else if (param_1 == 0xfd) {
                        param_1 = 0x79;
                      }
                      else if (param_1 == 0x9f) {
                        param_1 = 0x59;
                      }
                      else if (param_1 == 0xff) {
                        param_1 = 0x79;
                      }
                      else if (param_1 == 0x8a) {
                        param_1 = 0x53;
                      }
                      else if (param_1 == 0x9a) {
                        param_1 = 0x73;
                      }
                      else if (param_1 == 0x8e) {
                        param_1 = 0x5a;
                      }
                      else if (param_1 == 0x9e) {
                        param_1 = 0x7a;
                      }
                    }
                    else {
                      param_1 = 0x75;
                    }
                  }
                  else {
                    param_1 = 0x55;
                  }
                }
                else {
                  param_1 = 0x6f;
                }
              }
              else {
                param_1 = 0x4f;
              }
            }
            else {
              param_1 = 0x69;
            }
          }
          else {
            param_1 = 0x49;
          }
        }
        else {
          param_1 = 0x65;
        }
      }
      else {
        param_1 = 0x45;
      }
    }
    else {
      param_1 = 0x61;
    }
  }
  else {
    param_1 = 0x41;
  }
  return param_1;
}

