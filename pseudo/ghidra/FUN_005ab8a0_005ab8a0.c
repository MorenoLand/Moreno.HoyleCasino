// FUN_005ab8a0  005ab8a0

void __fastcall FUN_005ab8a0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uStack_34;
  undefined4 uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006a7bdc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = FUN_005fc360(DAT_00781870 ^ (uint)&stack0xfffffffc);
  switch(uVar2) {
  case 0:
    (**(code **)(*param_1 + 4))(1);
    (**(code **)(*param_1 + 0x1c))(0);
    break;
  case 1:
    (**(code **)(*param_1 + 4))(2);
    if (*(int *)(*(int *)(DAT_00793604 + 0x57c) + 0x808) < 0) {
      FUN_005b7f70();
    }
    if (*(int *)(DAT_00793604 + 0x5bc) == 2) {
      FUN_005cd7c0(0xcc1a,param_1,0);
    }
    else {
      (**(code **)(*param_1 + 0x1c))(0);
    }
    break;
  case 2:
    (**(code **)(*param_1 + 4))(3);
    cVar1 = FUN_005abce0();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      pvVar3 = operator_new(0x24);
      uStack_8 = 0;
      if (pvVar3 == (void *)0x0) {
        uStack_30 = 0;
      }
      else {
        uStack_30 = FUN_005aa670(1,param_1);
      }
      uStack_8 = 0xffffffff;
      FUN_005fc420(uStack_30);
    }
    break;
  case 3:
    (**(code **)(*param_1 + 4))(4);
    cVar1 = FUN_005abce0();
    if (cVar1 == '\0') {
      uVar4 = 0xffffffff;
      uVar2 = FUN_006436c0(0xffffffff);
      FUN_005b31b0(param_1[9],uVar2,uVar4);
      FUN_005a7ea0();
      cVar1 = FUN_005b6740();
      if (cVar1 != '\0') {
        FUN_005eaf00(0x13b1);
        (**(code **)(**(int **)(DAT_007935f8 + 0x44) + 0x74))();
      }
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      pvVar3 = operator_new(0x28);
      uStack_8 = 1;
      if (pvVar3 == (void *)0x0) {
        uStack_34 = 0;
      }
      else {
        uStack_34 = FUN_005aadf0(param_1[9],1,param_1);
      }
      uStack_8 = 0xffffffff;
      FUN_005fc420(uStack_34);
    }
    break;
  case 4:
    (**(code **)(*param_1 + 4))(5);
    cVar1 = FUN_005abce0();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      FUN_005aa380(param_1);
    }
    break;
  case 5:
    (**(code **)(*param_1 + 4))(6);
    (**(code **)(**(int **)(DAT_007935f8 + 0x40) + 0x70))();
    (**(code **)(**(int **)(DAT_007935f8 + 0x3c) + 0x70))();
    *(undefined1 *)(DAT_00793604 + 0x5c0) = 0;
    cVar1 = FUN_005b3300(param_1[9],0xffffffff);
    if (cVar1 == '\0') {
      if (((param_1[9] == 4) || (*(int *)(DAT_00793604 + 0x5bc) == 2)) ||
         (cVar1 = FUN_005b6170(param_1[9]), cVar1 != '\0')) {
        (**(code **)(*param_1 + 0x1c))(0);
      }
      else {
        FUN_005b7310(0xb,2);
        FUN_005ad620(param_1);
      }
    }
    else if (param_1[9] == 4) {
      FUN_005cd7c0(0xcb9d,param_1,0);
    }
    else {
      uVar4 = 1;
      uVar2 = FUN_005b4e50(param_1[9]);
      FUN_005ac560(uVar2,uVar4);
      FUN_005cd7c0(0xcc65,param_1,0);
    }
    break;
  case 6:
    if (param_1[4] != 0) {
      (**(code **)(*(int *)param_1[4] + 0x1c))(0);
      FUN_005fc420(0);
    }
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\royalmatchdisplay.cpp",0x618);
  }
  ExceptionList = local_10;
  return;
}

