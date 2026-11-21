// FUN_00641620  00641620

void FUN_00641620(char *param_1,int param_2,int *param_3,undefined4 *param_4)

{
  size_t sVar1;
  size_t local_8;
  
  local_8 = 0;
  while ((sVar1 = strlen(param_1), (int)local_8 < (int)sVar1 && (0 < param_2))) {
    if (param_1[local_8] == ' ') {
      param_2 = param_2 + -1;
    }
    local_8 = local_8 + 1;
  }
  sVar1 = strlen(param_1);
  if (local_8 == sVar1) {
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    if ((param_1[local_8] < '1') || ('9' < param_1[local_8])) {
      switch(param_1[local_8]) {
      case 'A':
        *param_3 = 0xe;
        break;
      default:
        FUN_005e9f20("FALSE","..\\casinoShell\\card.cpp",0x8a);
        break;
      case 'C':
        *param_3 = 0xc;
        break;
      case 'D':
        *param_3 = 0xd;
        break;
      case 'J':
        if (param_1[local_8 + 1] == 'o') {
          *param_3 = 0xf;
          local_8 = local_8 + 1;
        }
        else {
          *param_3 = 0xb;
        }
        break;
      case 'K':
        *param_3 = 0xd;
        break;
      case 'Q':
        *param_3 = 0xc;
        break;
      case 'R':
        *param_3 = 0xe;
        break;
      case 'V':
        *param_3 = 0xb;
        break;
      case 'a':
        *param_3 = 1;
      }
    }
    else if ((param_1[local_8 + 1] < '0') || ('9' < param_1[local_8 + 1])) {
      *param_3 = param_1[local_8] + -0x30;
    }
    else {
      *param_3 = (param_1[local_8] + -0x30) * 10 + -0x30 + (int)param_1[local_8 + 1];
      local_8 = local_8 + 1;
    }
    switch(param_1[local_8 + 1]) {
    case 'A':
      *param_4 = 0;
      break;
    default:
      FUN_005e9f20("FALSE","..\\casinoShell\\card.cpp",0x97);
      break;
    case 'C':
      *param_4 = 1;
      break;
    case 'D':
      *param_4 = 2;
      break;
    case 'E':
      *param_4 = 6;
      break;
    case 'H':
      *param_4 = 3;
      break;
    case 'S':
      *param_4 = 4;
      break;
    case 'T':
      *param_4 = 5;
    }
  }
  return;
}

