// FUN_00564d10  00564d10

int FUN_00564d10(undefined2 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int local_c;
  
  iVar1 = FUN_00641280(param_1);
  uVar2 = FUN_00641290(CONCAT22(extraout_var,param_1));
  iVar3 = FUN_005593d0(CONCAT22(extraout_var_00,param_1));
  if (iVar3 == 0x14) {
    if (iVar1 == 2) {
      switch(uVar2) {
      case 1:
        return 0x37;
      case 2:
        return 0x38;
      case 3:
        return 0x39;
      case 4:
        return 0x36;
      }
    }
    if (iVar1 == 0xf) {
      return 0x3a;
    }
  }
  if (iVar1 == 0xf) {
    local_c = 0x34;
  }
  else {
    switch(uVar2) {
    case 1:
      local_c = 0xd;
      break;
    case 2:
      local_c = 0x1a;
      break;
    case 3:
      local_c = 0x27;
      break;
    case 4:
      local_c = 0;
      break;
    default:
      FUN_005e9f20("false","..\\Casino\\vpmdisplay.cpp",0x7df);
      local_c = 0;
    }
    if ((iVar1 != 1) && (iVar1 != 0xe)) {
      local_c = local_c + -1 + iVar1;
    }
  }
  return local_c;
}

