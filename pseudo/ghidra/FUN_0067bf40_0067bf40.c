// FUN_0067bf40  0067bf40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0067bf40(int param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006ada10;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006044b0(0x20564157,0x1f56,0);
  FUN_006044b0(0x20584554,0x249f30,0);
  switch(param_2) {
  case 0:
    pvVar2 = operator_new(400);
    uStack_8 = 0;
    if (pvVar2 == (void *)0x0) {
      uStack_64 = 0;
    }
    else {
      uStack_64 = FUN_005f5f50();
    }
    uStack_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x244) = uStack_64;
    *(undefined4 *)(*(int *)(param_1 + 0x244) + 4) = *(undefined4 *)(param_1 + 4);
    FUN_005eaf00(0x249f30);
    (**(code **)(**(int **)(param_1 + 0x244) + 0x40))();
    FUN_005eae80(0x249f30,0x27,0,60000,0);
    *(undefined4 *)(*(int *)(param_1 + 0x244) + 0x184) = 5;
    *(undefined4 *)(*(int *)(param_1 + 0x244) + 0x188) = 7;
    (**(code **)(**(int **)(param_1 + 0x244) + 0x74))();
    pvVar2 = operator_new(0x2c);
    uStack_8 = 1;
    if (pvVar2 == (void *)0x0) {
      uStack_68 = 0;
    }
    else {
      uStack_68 = FUN_00606e60(0,0,0,0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f6050(uStack_68);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(1,0x3c);
    break;
  case 1:
    (**(code **)(**(int **)(param_1 + 0x244) + 0xb0))(1);
    *(undefined4 *)(*(int *)(param_1 + 0x244) + 0x184) = 2;
    *(undefined4 *)(*(int *)(param_1 + 0x244) + 0x188) = 8;
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(2,0x1e);
    break;
  case 2:
    pvVar2 = operator_new(0x2c);
    uStack_8 = 2;
    if (pvVar2 == (void *)0x0) {
      uStack_6c = 0;
    }
    else {
      uStack_6c = FUN_00606e60(0,0x1f,0,0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f6050(uStack_6c);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (*(undefined4 *)(param_1 + 0x2a0),0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(3,0x1e);
    break;
  case 3:
    (**(code **)(**(int **)(param_1 + 0x244) + 0xb0))(0x16);
    (**(code **)(**(int **)(param_1 + 0x244) + 0x48))(0xa6);
    *(undefined4 *)(*(int *)(param_1 + 0x244) + 0x184) = 4;
    pvVar2 = operator_new(0x20);
    uStack_8 = 3;
    if (pvVar2 == (void *)0x0) {
      uStack_70 = 0;
    }
    else {
      uStack_70 = FUN_00600f30(0x1c,*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_70);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(4);
    break;
  case 4:
    (**(code **)(**(int **)(param_1 + 0x244) + 0x70))();
    *(undefined4 *)(*(int *)(param_1 + 0x244) + 0x184) = 6;
    (**(code **)(**(int **)(param_1 + 0x244) + 0x48))(0xffffffee);
    (**(code **)(**(int **)(param_1 + 0x244) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x244) + 0xb0))(5);
    pvVar2 = operator_new(0x2c);
    uStack_8 = 4;
    if (pvVar2 == (void *)0x0) {
      uStack_74 = 0;
    }
    else {
      uStack_74 = FUN_00606e60(0,0xffffffe6,0,0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f6050(uStack_74);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(5,6);
    break;
  case 5:
    (**(code **)(**(int **)(param_1 + 0x244) + 0xb0))(2);
    DAT_016306ec = (**(code **)(**(int **)(param_1 + 0x244) + 0x4c))();
    DAT_016306e8 = DAT_016306ec + -8;
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(6,4);
    break;
  case 6:
    (**(code **)(**(int **)(param_1 + 0x244) + 0xb0))(3);
    if (DAT_016306e8 < -0x9c) {
      (**(code **)(**(int **)(param_1 + 0x17c) + 8))(7,6);
    }
    else {
      pvVar2 = operator_new(0x2c);
      uStack_8 = 5;
      if (pvVar2 == (void *)0x0) {
        uStack_78 = 0;
      }
      else {
        uStack_78 = FUN_00606e60(0,DAT_016306e8,0,0);
      }
      uStack_8 = 0xffffffff;
      FUN_005f6050(uStack_78);
      (**(code **)(**(int **)(param_1 + 0x17c) + 8))(5,6);
    }
    break;
  case 7:
    (**(code **)(**(int **)(param_1 + 0x244) + 0x48))(0xffffff64);
    (**(code **)(**(int **)(param_1 + 0x244) + 0xb0))(4);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(8,6);
    break;
  case 8:
    (**(code **)(**(int **)(param_1 + 0x244) + 0xb0))(6);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(9,6);
    break;
  case 9:
    (**(code **)(**(int **)(param_1 + 0x244) + 0xb0))(7);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(10,0xf);
    break;
  case 10:
    pvVar2 = operator_new(0x20);
    uStack_8 = 6;
    if (pvVar2 == (void *)0x0) {
      uStack_7c = 0;
    }
    else {
      uStack_7c = FUN_00600f30(0x1c,*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_7c);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(0xb);
    break;
  case 0xb:
    (**(code **)(**(int **)(param_1 + 0x244) + 0x48))(0xfffffedb);
    (**(code **)(**(int **)(param_1 + 0x244) + 0xb0))(0x16);
    pvVar2 = operator_new(0x20);
    uStack_8 = 7;
    if (pvVar2 == (void *)0x0) {
      uStack_80 = 0;
    }
    else {
      uStack_80 = FUN_00600f30(0x1c,*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_80);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(0xc);
    break;
  case 0xc:
    (**(code **)(**(int **)(param_1 + 0x244) + 0x48))(0xfffffe52);
    (**(code **)(**(int **)(param_1 + 0x244) + 0xb0))(0x16);
    pvVar2 = operator_new(0x20);
    uStack_8 = 8;
    if (pvVar2 == (void *)0x0) {
      uStack_84 = 0;
    }
    else {
      uStack_84 = FUN_00600f30(0x1c,*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_84);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(0xd);
    break;
  case 0xd:
    (**(code **)(**(int **)(param_1 + 0x244) + 0x70))(uVar1);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0xe,0xf);
    break;
  case 0xe:
    FUN_00650550(0);
  }
  ExceptionList = local_10;
  return;
}

