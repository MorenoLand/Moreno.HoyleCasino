// FUN_0067d090  0067d090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0067d090(int param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006adb22;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006044b0(0x20564157,0x1f5d,0);
  FUN_006044b0(0x20564157,0x1f5e,0);
  FUN_006044b0(0x20564157,0x1f5f,0);
  FUN_006044b0(0x20564157,0x1f60,0);
  FUN_006044b0(0x20564157,0x1f61,0);
  for (DAT_016306fc = 0; DAT_016306fc < 4; DAT_016306fc = DAT_016306fc + 1) {
    FUN_006044b0(0x20584554,DAT_016306fc + 0x249f36,0);
  }
  switch(param_2) {
  case 0:
    for (DAT_016306fc = 0; DAT_016306fc < 4; DAT_016306fc = DAT_016306fc + 1) {
      pvVar1 = operator_new(400);
      uStack_8 = 0;
      if (pvVar1 == (void *)0x0) {
        uStack_74 = 0;
      }
      else {
        uStack_74 = FUN_005f5f50();
      }
      uStack_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x25c + DAT_016306fc * 4) = uStack_74;
      *(undefined4 *)(*(int *)(param_1 + 0x25c + DAT_016306fc * 4) + 4) =
           *(undefined4 *)(param_1 + 4);
      FUN_005eaf00(DAT_016306fc + 0x249f36);
      (**(code **)(**(int **)(param_1 + 0x25c + DAT_016306fc * 4) + 0x40))();
    }
    FUN_005eae80(0x249f36,0,0,50000,0);
    FUN_005eae80(0x249f37,0xffffffe2,0xfffffffe,55000,0);
    FUN_005eae80(0x249f38,0xaa,0,59000,0);
    FUN_005eae80(0x249f39,0xffffffd8,0,60000,0);
    (**(code **)(**(int **)(param_1 + 0x25c) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x260) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x264) + 0x74))();
    *(undefined4 *)(*(int *)(param_1 + 0x264) + 0x184) = 6;
    *(undefined4 *)(*(int *)(param_1 + 0x264) + 0x188) = 10;
    *(undefined4 *)(*(int *)(param_1 + 0x268) + 0x184) = 6;
    *(undefined4 *)(*(int *)(param_1 + 0x268) + 0x188) = 8;
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f5d,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(1,0x3c);
    break;
  case 1:
    DAT_016306f8 = (**(code **)(**(int **)(param_1 + 0x264) + 0x4c))();
    DAT_016306f4 = DAT_016306f8 + -0x24;
    FUN_005eae80(0x249f38,DAT_016306f4,0,59000,0);
    (**(code **)(**(int **)(param_1 + 0x264) + 0xb0))(1);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(2,4);
    break;
  case 2:
    pvVar1 = operator_new(0x20);
    uStack_8 = 1;
    if (pvVar1 == (void *)0x0) {
      uStack_78 = 0;
    }
    else {
      uStack_78 = FUN_00600f30(5,*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_78);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(3);
    break;
  case 3:
    if (DAT_016306f4 < -0x18) {
      (**(code **)(**(int **)(param_1 + 0x17c) + 8))(4,10);
    }
    else {
      pvVar1 = operator_new(0x2c);
      uStack_8 = 2;
      if (pvVar1 == (void *)0x0) {
        uStack_7c = 0;
      }
      else {
        uStack_7c = FUN_00606e60(0,DAT_016306f4,0,0);
      }
      uStack_8 = 0xffffffff;
      FUN_005f6050(uStack_7c);
      (**(code **)(**(int **)(param_1 + 0x17c) + 8))(1,0xd);
    }
    break;
  case 4:
    pvVar1 = operator_new(0x20);
    uStack_8 = 3;
    if (pvVar1 == (void *)0x0) {
      uStack_80 = 0;
    }
    else {
      uStack_80 = FUN_00600f30(7,*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_80);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(5);
    break;
  case 5:
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(6,0x12);
    break;
  case 6:
    (**(code **)(**(int **)(param_1 + 0x264) + 0xb0))(8);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(7,10);
    break;
  case 7:
    (**(code **)(**(int **)(param_1 + 0x264) + 0xb0))(7);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(8,10);
    break;
  case 8:
    (**(code **)(**(int **)(param_1 + 0x264) + 0xb0))(8);
    (**(code **)(**(int **)(param_1 + 0x268) + 0x74))();
    pvVar1 = operator_new(0x20);
    uStack_8 = 4;
    if (pvVar1 == (void *)0x0) {
      uStack_84 = 0;
    }
    else {
      uStack_84 = FUN_00600f30(9,0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_84);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(9,10);
    break;
  case 9:
    pvVar1 = operator_new(0x20);
    uStack_8 = 5;
    if (pvVar1 == (void *)0x0) {
      uStack_88 = 0;
    }
    else {
      uStack_88 = FUN_00600f30(0xd,*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_88);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(10);
    break;
  case 10:
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0xb,10);
    break;
  case 0xb:
    (**(code **)(**(int **)(param_1 + 0x264) + 0xb0))(0xe);
    (**(code **)(**(int **)(param_1 + 0x268) + 0xb0))(0xc);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0xc,0x1e);
    break;
  case 0xc:
    *(undefined4 *)(*(int *)(param_1 + 0x268) + 0x184) = 2;
    pvVar1 = operator_new(0x2c);
    uStack_8 = 6;
    if (pvVar1 == (void *)0x0) {
      uStack_8c = 0;
    }
    else {
      uStack_8c = FUN_00606e60(*(undefined4 *)(param_1 + 0x17c),0xffffffe7,0xfffffff7,0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f6050(uStack_8c);
    (**(code **)(**(int **)(param_1 + 0x264) + 0xb0))(0xf);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(0xd);
    break;
  case 0xd:
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0xe,10);
    break;
  case 0xe:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f5e,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(**(int **)(param_1 + 0x264) + 0xb0))(0x10);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0xf,10);
    break;
  case 0xf:
    (**(code **)(**(int **)(param_1 + 0x264) + 0xb0))(0xf);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0x10,10);
    break;
  case 0x10:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f5f,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(**(int **)(param_1 + 0x264) + 0xb0))(0x10);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0x11,10);
    break;
  case 0x11:
    (**(code **)(**(int **)(param_1 + 0x264) + 0xb0))(0xf);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0x12,10);
    break;
  case 0x12:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f60,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(**(int **)(param_1 + 0x264) + 0xb0))(0x10);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0x13,10);
    break;
  case 0x13:
    (**(code **)(**(int **)(param_1 + 0x264) + 0xb0))(0xf);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0x14,10);
    break;
  case 0x14:
    pvVar1 = operator_new(0x2c);
    uStack_8 = 7;
    if (pvVar1 == (void *)0x0) {
      uStack_90 = 0;
    }
    else {
      uStack_90 = FUN_00606e60(*(undefined4 *)(param_1 + 0x17c),0xffffffd8,0,0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f6050(uStack_90);
    (**(code **)(**(int **)(param_1 + 0x264) + 0xb0))(0xe);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(0x15);
    break;
  case 0x15:
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0x16,0xf);
    break;
  case 0x16:
    pvVar1 = operator_new(0x20);
    uStack_8 = 8;
    if (pvVar1 == (void *)0x0) {
      uStack_94 = 0;
    }
    else {
      uStack_94 = FUN_006010a0(0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_94);
    *(undefined4 *)(*(int *)(param_1 + 0x264) + 0x188) = 4;
    (**(code **)(**(int **)(param_1 + 0x264) + 0xb0))(0xf);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0x17,6);
    break;
  case 0x17:
    FUN_005eae80(0x249f39,0xffffffd8,0,60000,0);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0x18,6);
    break;
  case 0x18:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f61,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(**(int **)(param_1 + 0x264) + 0xb0))(0x11);
    *(undefined4 *)(*(int *)(param_1 + 0x264) + 0x188) = 10;
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0x19,6);
    break;
  case 0x19:
    pvVar1 = operator_new(0x20);
    uStack_8 = 9;
    if (pvVar1 == (void *)0x0) {
      uStack_98 = 0;
    }
    else {
      uStack_98 = FUN_006010a0(*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_98);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0x1a,0xffffffff);
    break;
  case 0x1a:
    *(undefined4 *)(*(int *)(param_1 + 0x264) + 0x184) = 2;
    pvVar1 = operator_new(0x2c);
    uStack_8 = 10;
    if (pvVar1 == (void *)0x0) {
      uStack_9c = 0;
    }
    else {
      uStack_9c = FUN_00606e60(*(undefined4 *)(param_1 + 0x17c),0xfffffed4,0,0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f6050(uStack_9c);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(0x1b);
    break;
  case 0x1b:
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0x1c,0x5a);
    break;
  case 0x1c:
    FUN_00650550(0);
  }
  ExceptionList = local_10;
  return;
}

