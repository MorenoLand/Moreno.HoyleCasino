// FUN_005aaa20  005aaa20

void __fastcall FUN_005aaa20(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006a7b65;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = FUN_005fc360(DAT_00781870 ^ (uint)&stack0xfffffffc);
  switch(uVar2) {
  case 0:
    iVar3 = FUN_005b52e0();
    param_1[8] = iVar3;
    (**(code **)(*param_1 + 4))(1);
    cVar1 = FUN_005aad60();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      pvVar4 = operator_new(0x24);
      uStack_8 = 0;
      if (pvVar4 == (void *)0x0) {
        uStack_34 = 0;
      }
      else {
        uStack_34 = FUN_005aa670(1,param_1);
      }
      uStack_8 = 0xffffffff;
      FUN_005fc420(uStack_34);
    }
    break;
  case 1:
    (**(code **)(*param_1 + 4))(2);
    cVar1 = FUN_005aad60();
    if (cVar1 == '\0') {
      uVar5 = 0xffffffff;
      uVar2 = FUN_006436c0(0xffffffff);
      FUN_005b31b0(param_1[8],uVar2,uVar5);
      FUN_005a7ea0();
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      pvVar4 = operator_new(0x28);
      uStack_8 = 1;
      if (pvVar4 == (void *)0x0) {
        uStack_38 = 0;
      }
      else {
        uStack_38 = FUN_005aadf0(param_1[8],0,param_1);
      }
      uStack_8 = 0xffffffff;
      FUN_005fc420(uStack_38);
    }
    break;
  case 2:
    iVar3 = FUN_005b5830(4,0xffffffff);
    if (iVar3 == 2) {
      (**(code **)(*param_1 + 8))(3,0);
    }
    else {
      iVar3 = FUN_005b52e0();
      param_1[8] = iVar3;
      (**(code **)(*param_1 + 4))(1);
      cVar1 = FUN_005aad60();
      if (cVar1 == '\0') {
        (**(code **)(*param_1 + 0x1c))(3);
      }
      else {
        pvVar4 = operator_new(0x24);
        uStack_8 = 2;
        if (pvVar4 == (void *)0x0) {
          uStack_3c = 0;
        }
        else {
          uStack_3c = FUN_005aa670(0,param_1);
        }
        uStack_8 = 0xffffffff;
        FUN_005fc420(uStack_3c);
      }
    }
    break;
  case 3:
    (**(code **)(*param_1 + 4))(4);
    cVar1 = FUN_005aad60();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      FUN_005aa380(param_1);
    }
    break;
  case 4:
    (**(code **)(**(int **)(DAT_007935f8 + 0x40) + 0x70))();
    (**(code **)(**(int **)(DAT_007935f8 + 0x3c) + 0x70))();
    *(undefined1 *)(DAT_00793604 + 0x5c0) = 0;
    (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
    FUN_005fc420(0);
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\royalmatchdisplay.cpp",0x48e);
  }
  ExceptionList = local_10;
  return;
}

