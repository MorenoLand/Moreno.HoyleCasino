// FUN_00554c80  00554c80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00554c80(int *param_1,int param_2)

{
  if ((*(char *)(DAT_00793420 + 0x2c) == '\0') && (param_2 != 0)) {
    if (param_2 < 0x15) {
      (**(code **)(*DAT_0162ee84 + 0x80))(0x18a94,0,0,10,3,0x3f800000,_DAT_006b3654,param_1 + 0x25);
    }
    else if (param_2 < 0x65) {
      (**(code **)(*DAT_0162ee84 + 0x80))(0x18a94,0,0,10,5,0x3f800000,_DAT_006b3654,param_1 + 0x25);
    }
    else if (*(char *)(DAT_00793420 + 0x2d) == '\0') {
      (**(code **)(*DAT_0162ee84 + 0x80))(0x18a94,0,0,10,5,0x3f800000,_DAT_006b3654,param_1 + 0x25);
      (**(code **)(*DAT_0162ee84 + 0x80))(0x18a95,0,0,10,1,0x3f800000,_DAT_006b3654,param_1 + 0x26);
    }
    else {
      (**(code **)(*DAT_0162ee84 + 0x80))
                (0x18a94,0,0,10,0x10,0x3f800000,_DAT_006b3654,param_1 + 0x25);
      (**(code **)(*DAT_0162ee84 + 0x80))(0x18a95,0,0,10,3,0x3f800000,_DAT_006b3654,param_1 + 0x26);
    }
  }
  (**(code **)(*param_1 + 0x10))(param_2);
  return;
}

