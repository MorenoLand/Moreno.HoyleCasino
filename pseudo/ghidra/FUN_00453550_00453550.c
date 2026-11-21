// FUN_00453550  00453550

undefined4 __thiscall FUN_00453550(undefined4 param_1,char *param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*param_3 < *param_2) {
    return 1;
  }
  if (*param_2 == *param_3) {
    switch(*param_2 + -1) {
    case 0:
    case 5:
      uVar2 = FUN_004536f0(param_2,param_3);
      break;
    case 1:
      uVar2 = FUN_00453760(param_2,param_3);
      break;
    case 2:
      uVar2 = FUN_004537b0(param_2,param_3);
      break;
    case 3:
    case 6:
    case 7:
      if (param_3[1] < param_2[1]) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      break;
    case 4:
    case 8:
      if (param_2[1] == param_3[1]) {
        uVar2 = 1;
      }
      else {
        cVar1 = FUN_0045f940();
        if (cVar1 == '\0') {
          if (param_3[1] < param_2[1]) {
            return 1;
          }
        }
        else if (param_3[1] < param_2[1]) {
          if ((param_2[1] == '\x0e') || (param_3[1] != '\x05')) {
            return 1;
          }
        }
        else if ((param_2[1] == '\x05') && (param_3[1] != '\x0e')) {
          return 1;
        }
        uVar2 = 0;
      }
      break;
    default:
      FUN_005e9f20("false","..\\Casino\\paigowai.cpp",0x81c,*param_2 + -1,param_1);
      goto LAB_004536b9;
    }
  }
  else {
LAB_004536b9:
    uVar2 = 0;
  }
  return uVar2;
}

