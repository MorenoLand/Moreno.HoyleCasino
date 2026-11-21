// FUN_00641a30  00641a30

int FUN_00641a30(undefined4 param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  
  if (param_2 == 1) {
code_r0x00641b64:
    switch(param_1) {
    case 1:
      iVar1 = 4;
      break;
    case 2:
      iVar1 = (param_4 != '\0') + 1;
      break;
    case 3:
      iVar1 = 3;
      break;
    case 4:
      iVar1 = 2 - (uint)(param_4 != '\0');
      break;
    default:
      FUN_005e9f20("false","..\\casinoShell\\card.cpp",0xeb);
      iVar1 = 0;
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 3) {
        switch(param_1) {
        case 1:
          return 2 - (uint)(param_4 != '\0');
        case 2:
          return (param_4 != '\0') + 1;
        case 3:
          return 3;
        case 4:
          return 4;
        }
      }
      switch(param_1) {
      case 1:
        return (param_3 != '\0') + 1;
      case 2:
        return 2 - (uint)(param_3 != '\0');
      case 3:
        return 4;
      case 4:
        return 3;
      }
    }
    switch(param_1) {
    case 1:
      iVar1 = (param_3 != '\0') + 1;
      break;
    case 2:
      iVar1 = 4;
      break;
    case 3:
      iVar1 = 2 - (uint)(param_3 != '\0');
      break;
    case 4:
      iVar1 = 3;
      break;
    default:
      goto code_r0x00641b64;
    }
  }
  return iVar1;
}

