// FUN_005aafb0  005aafb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005aafb0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *local_30 [4];
  int *local_20;
  int local_1c [6];
  
  local_30[0] = (int *)0x18a8b;
  local_30[1] = (int *)0x18a8c;
  local_30[2] = (int *)0x18a8d;
  local_1c[0] = 6;
  local_1c[1] = 6;
  local_1c[2] = 6;
  local_1c[3] = 5;
  local_1c[4] = 5;
  local_1c[5] = 7;
  local_30[3] = *(int **)(DAT_007935f8 + 0x40);
  local_20 = *(int **)(DAT_007935f8 + 0x3c);
  uVar1 = FUN_005fc360();
  switch(uVar1) {
  case 0:
    DAT_007935f0 = 0;
    _DAT_007935ec = 0;
    DAT_007935e8 = FUN_005eb240();
    DAT_007935e4 = FUN_005eb240();
    (**(code **)(*local_30[3] + 0xb0))(0);
    (**(code **)(*local_20 + 0xb0))(0);
    iVar2 = FUN_005b6790();
    if (*(int *)(DAT_00793604 + 0x5b0) == iVar2) {
      *(undefined1 *)((int)param_1 + 0x25) = 1;
    }
    (**(code **)(*param_1 + 8))(1,4);
    break;
  case 1:
    DAT_007935f0 = DAT_007935f0 + 1;
    if (DAT_007935f0 <= DAT_007935e8) {
      (**(code **)(*local_30[3] + 0xb0))(DAT_007935f0);
    }
    if (DAT_007935f0 <= DAT_007935e4) {
      (**(code **)(*local_20 + 0xb0))(DAT_007935f0);
    }
    if (DAT_007935f0 == local_1c[param_1[8]] + -1) {
      iVar2 = FUN_0062fbf0(3,0,0,5,1,0x3f800000,_DAT_006b3654,0);
      (**(code **)(*DAT_0162ee84 + 0x80))(local_30[iVar2]);
    }
    else if (DAT_007935f0 == local_1c[param_1[8]]) {
      uVar3 = 0xffffffff;
      uVar1 = FUN_006436c0(0xffffffff);
      FUN_005b31b0(param_1[8],uVar1,uVar3);
      FUN_005a7ea0();
    }
    if ((DAT_007935f0 < DAT_007935e8) || (DAT_007935f0 < DAT_007935e4)) {
      (**(code **)(*param_1 + 4))(1);
    }
    else if (*(char *)((int)param_1 + 0x25) == '\0') {
      (**(code **)(*param_1 + 4))(4);
    }
    else {
      (**(code **)(*param_1 + 4))(2);
    }
    (**(code **)(*param_1 + 0x1c))(4);
    break;
  case 2:
    DAT_007935f0 = 0;
    FUN_005eaf00(0x13af);
    FUN_005eaf00(0x13ae);
    (**(code **)(*local_30[3] + 0xb0))(0);
    (**(code **)(*local_20 + 0xb0))(0);
    DAT_007935e8 = FUN_005eb240();
    DAT_007935e4 = FUN_005eb240();
    (**(code **)(*param_1 + 8))(3,4);
    break;
  case 3:
    DAT_007935f0 = DAT_007935f0 + 1;
    if (DAT_007935f0 <= DAT_007935e8) {
      (**(code **)(*local_30[3] + 0xb0))(DAT_007935f0);
    }
    if (DAT_007935f0 <= DAT_007935e4) {
      (**(code **)(*local_20 + 0xb0))(DAT_007935f0);
    }
    if (DAT_007935f0 == 3) {
      (**(code **)(**(int **)(DAT_007935f8 + 0x44) + 0x70))();
    }
    else if (DAT_007935f0 == local_1c[5]) {
      FUN_005eaf00(0x13b1);
      (**(code **)(**(int **)(DAT_007935f8 + 0x44) + 0x74))();
    }
    if ((DAT_007935f0 < DAT_007935e8) || (DAT_007935f0 < DAT_007935e4)) {
      (**(code **)(*param_1 + 4))(3);
    }
    else {
      (**(code **)(*param_1 + 4))(4);
    }
    (**(code **)(*param_1 + 0x1c))(4);
    break;
  case 4:
    (**(code **)(*local_30[3] + 0x6c))(0x97);
    (**(code **)(*local_20 + 0x6c))(0x96);
    if (param_1[4] != 0) {
      (**(code **)(*(int *)param_1[4] + 0x1c))(0);
      FUN_005fc420(0);
    }
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\royalmatchdisplay.cpp",0x535);
  }
  return;
}

