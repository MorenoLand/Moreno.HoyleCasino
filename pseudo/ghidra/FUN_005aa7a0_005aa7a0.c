// FUN_005aa7a0  005aa7a0

void __fastcall FUN_005aa7a0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005fc360();
  if (iVar1 == 0) {
    DAT_007935e0 = 0;
    DAT_007935dc = FUN_005eb240();
    DAT_007935d8 = FUN_005eb240();
    (**(code **)(*param_1 + 8))(1,4);
  }
  else if (iVar1 == 1) {
    DAT_007935e0 = DAT_007935e0 + 1;
    if (DAT_007935e0 <= DAT_007935d8) {
      (**(code **)(**(int **)(DAT_007935f8 + 0x40) + 0xb0))(DAT_007935e0);
    }
    if (DAT_007935e0 <= DAT_007935dc) {
      (**(code **)(**(int **)(DAT_007935f8 + 0x3c) + 0xb0))(DAT_007935e0);
    }
    if ((DAT_007935e0 == (-(uint)((char)param_1[8] != '\0') & 3) + 4) &&
       (iVar1 = FUN_005b6790(), *(int *)(DAT_00793604 + 0x5b0) == iVar1)) {
      FUN_005eaf00(0x13a1);
      (**(code **)(**(int **)(DAT_007935f8 + 0x44) + 0x74))();
    }
    if ((DAT_007935e0 < DAT_007935dc) || (DAT_007935e0 < DAT_007935d8)) {
      (**(code **)(*param_1 + 4))(1);
    }
    else {
      (**(code **)(*param_1 + 4))(2);
    }
    (**(code **)(*param_1 + 0x1c))(4);
  }
  else if (iVar1 == 2) {
    if (param_1[4] != 0) {
      (**(code **)(*(int *)param_1[4] + 0x1c))(0);
      FUN_005fc420(0);
    }
  }
  else {
    FUN_005e9f20("false","..\\Casino\\royalmatchdisplay.cpp",0x437);
  }
  return;
}

