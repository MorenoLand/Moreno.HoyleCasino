// FUN_006597c0  006597c0

void __thiscall FUN_006597c0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_14;
  undefined8 uStack_c;
  
  if ((param_2 < 0x473) || (0x4d6 < param_2)) {
    if ((param_2 < 0x4d7) || (0x4e2 < param_2)) {
      if (DAT_00795f95 == '\0') {
        switch(param_2) {
        case 1000:
        case 0x3eb:
        case 0x3ed:
        case 0x3ef:
          cVar1 = FUN_00659ad0(1,param_2);
          if (cVar1 == '\0') {
            return;
          }
        }
      }
      switch(param_2) {
      case 1000:
        FUN_0065a2f0();
        break;
      case 0x3e9:
        FUN_006592c0(0);
        break;
      case 0x3ea:
        FUN_00658b20();
        break;
      case 0x3eb:
        FUN_0065a290();
        break;
      case 0x3ec:
        FUN_0065a730();
        break;
      case 0x3ed:
        FUN_0065a540();
        break;
      case 0x3ee:
        FUN_00659ad0(0,0xffffffff);
        break;
      case 0x3ef:
        FUN_0065a710();
        break;
      case 0x3f0:
        FUN_006591b0(0);
        break;
      case 0x3f1:
        FUN_006591b0(1);
        break;
      case 0x3f2:
        FUN_00658880(0);
        break;
      case 0x3f3:
        FUN_00658880(2);
        break;
      case 0x3f4:
        FUN_00658880(3);
        break;
      case 0x3f5:
        FUN_00658880(1);
        break;
      case 0x3f6:
        FUN_006595e0(0);
        break;
      case 0x3f7:
        FUN_006595e0(1);
        break;
      case 0x3f8:
        FUN_006595e0(2);
        break;
      case 0x3f9:
        FUN_006595e0(3);
        break;
      case 0x401:
        uStack_20 = 6000;
        uStack_1c = 0xffffffff;
        uStack_14 = 0;
        uStack_c = 0x3ff0000000000000;
        uStack_24 = 0xffffffff;
        FUN_006476f0(&uStack_24,0,0,0xffffffff,1);
      }
    }
    else {
      FUN_006067e0();
      (**(code **)(**(int **)(param_1 + -0xd50 + param_2 * 4) + 0xf4))();
      FUN_0065a9a0();
    }
  }
  else {
    *(char *)(param_1 + 0x280) = (char)param_2 + -0x73;
    FUN_00657e60(*(char *)(param_1 + 0x280) * 0xc,1);
  }
  return;
}

