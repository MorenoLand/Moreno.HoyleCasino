// FUN_0067df70  0067df70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0067df70(int param_1,undefined4 param_2)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006adb8d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006044b0(0x20564157,0x1f65,0);
  FUN_006044b0(0x20564157,0x1f66,0);
  FUN_006044b0(0x20564157,0x1f67,0);
  FUN_006044b0(0x20564157,0x1f68,0);
  FUN_006044b0(0x20584554,0x249f3a,0);
  FUN_006044b0(0x20584554,0x249f3b,0);
  switch(param_2) {
  case 0:
    pvVar2 = operator_new(400);
    uStack_8 = 0;
    if (pvVar2 == (void *)0x0) {
      uStack_58 = 0;
    }
    else {
      uStack_58 = FUN_005f5f50();
    }
    uStack_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x26c) = uStack_58;
    *(undefined4 *)(*(int *)(param_1 + 0x26c) + 4) = *(undefined4 *)(param_1 + 4);
    FUN_005eaf00(0x249f3a);
    (**(code **)(**(int **)(param_1 + 0x26c) + 0x40))();
    pvVar2 = operator_new(400);
    uStack_8 = 1;
    if (pvVar2 == (void *)0x0) {
      uStack_5c = 0;
    }
    else {
      uStack_5c = FUN_005f5f50();
    }
    uStack_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x270) = uStack_5c;
    *(undefined4 *)(*(int *)(param_1 + 0x270) + 4) = *(undefined4 *)(param_1 + 4);
    FUN_005eaf00(0x249f3b);
    (**(code **)(**(int **)(param_1 + 0x270) + 0x40))();
    FUN_005eae80(0x249f3a,0,0,55000,0);
    FUN_005eae80(0x249f3b,0,0,60000,0);
    FUN_005eb5d0(0);
    (**(code **)(**(int **)(param_1 + 0x26c) + 0x74))();
    *(undefined4 *)(*(int *)(param_1 + 0x26c) + 0x178) = 6;
    *(undefined4 *)(*(int *)(param_1 + 0x270) + 0x178) = 8;
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f65,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(1,6);
    break;
  case 1:
    cVar1 = FUN_005eb610();
    if (cVar1 == -7) {
      (**(code **)(**(int **)(param_1 + 0x17c) + 4))(100);
    }
    else {
      uVar3 = FUN_005eb610();
      FUN_005eb5d0((uVar3 & 0xff) + 0x32);
      for (iStack_14 = 0; iStack_14 < 5; iStack_14 = iStack_14 + 1) {
        uVar4 = FUN_005eb610();
        FUN_005eb5d0(uVar4);
      }
      (**(code **)(**(int **)(param_1 + 0x17c) + 4))(1);
    }
    (**(code **)(**(int **)(param_1 + 0x17c) + 0x1c))(7);
    break;
  case 2:
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(3,0x3c);
    break;
  case 3:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f67,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(**(int **)(param_1 + 0x270) + 0x74))();
    pvVar2 = operator_new(0x20);
    uStack_8 = 3;
    if (pvVar2 == (void *)0x0) {
      uStack_64 = 0;
    }
    else {
      uStack_64 = FUN_006010a0(*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_64);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(4);
    break;
  case 4:
    (**(code **)(**(int **)(param_1 + 0x270) + 0xb0))(0);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(5,6);
    break;
  case 5:
    (**(code **)(**(int **)(param_1 + 0x270) + 0xb0))(8);
    pvVar2 = operator_new(0x20);
    uStack_8 = 4;
    if (pvVar2 == (void *)0x0) {
      uStack_68 = 0;
    }
    else {
      uStack_68 = FUN_00601030(*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_68);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(6);
    break;
  case 6:
    (**(code **)(**(int **)(param_1 + 0x270) + 0x74))();
    pvVar2 = operator_new(0x20);
    uStack_8 = 5;
    if (pvVar2 == (void *)0x0) {
      uStack_6c = 0;
    }
    else {
      uStack_6c = FUN_006010a0(*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_6c);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(7);
    break;
  case 7:
    (**(code **)(**(int **)(param_1 + 0x270) + 0xb0))(0);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(8,6);
    break;
  case 8:
    (**(code **)(**(int **)(param_1 + 0x270) + 0xb0))(8);
    pvVar2 = operator_new(0x20);
    uStack_8 = 6;
    if (pvVar2 == (void *)0x0) {
      uStack_70 = 0;
    }
    else {
      uStack_70 = FUN_00601030(*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_70);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(9);
    break;
  case 9:
    (**(code **)(**(int **)(param_1 + 0x270) + 0x70))();
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f68,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(10,0x1e);
    break;
  case 10:
    cVar1 = FUN_005eb610();
    if (cVar1 == '\x18') {
      FUN_005eb5d0(0);
      (**(code **)(**(int **)(param_1 + 0x17c) + 4))(0xb);
    }
    else {
      uVar3 = FUN_005eb610();
      FUN_005eb5d0((uVar3 & 0xff) - 0x19);
      for (iStack_14 = 0; iStack_14 < 5; iStack_14 = iStack_14 + 1) {
        uVar4 = FUN_005eb610();
        FUN_005eb5d0(uVar4);
      }
      (**(code **)(**(int **)(param_1 + 0x17c) + 4))(10);
    }
    (**(code **)(**(int **)(param_1 + 0x17c) + 0x1c))(7);
    break;
  case 0xb:
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0xc,0x3c);
    break;
  case 0xc:
    FUN_00650550(0);
    break;
  case 100:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f66,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    FUN_005eb5d0(0xff);
    pvVar2 = operator_new(0x20);
    uStack_8 = 2;
    if (pvVar2 == (void *)0x0) {
      uStack_60 = 0;
    }
    else {
      uStack_60 = FUN_006010a0(*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_60);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(2);
  }
  ExceptionList = local_10;
  return;
}

