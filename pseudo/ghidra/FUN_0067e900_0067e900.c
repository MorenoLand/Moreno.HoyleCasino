// FUN_0067e900  0067e900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0067e900(int param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006adc2c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006044b0(0x20564157,0x1f62,0);
  FUN_006044b0(0x20564157,0x1f63,0);
  FUN_006044b0(0x20564157,0x1f64,0);
  FUN_006044b0(0x20584554,0x249f3c,0);
  FUN_006044b0(0x20584554,0x249f3d,0);
  FUN_006044b0(0x20584554,0x249f3e,0);
  FUN_006044b0(0x20584554,0x249f3f,0);
  FUN_006044b0(0x20584554,0x249f40,0);
  FUN_006044b0(0x20584554,0x249f42,0);
  FUN_006044b0(0x20584554,0x249f43,0);
  FUN_006044b0(0x20584554,0x249f41,0);
  FUN_006044b0(0x20584554,0x249f44,0);
  switch(param_2) {
  case 0:
    for (iStack_14 = 0; iStack_14 < 3; iStack_14 = iStack_14 + 1) {
      pvVar2 = operator_new(400);
      uStack_8 = 0;
      if (pvVar2 == (void *)0x0) {
        uStack_80 = 0;
      }
      else {
        uStack_80 = FUN_005f5f50();
      }
      uStack_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x274 + iStack_14 * 4) = uStack_80;
      *(undefined4 *)(*(int *)(param_1 + 0x274 + iStack_14 * 4) + 4) = *(undefined4 *)(param_1 + 4);
      FUN_005eaf00(iStack_14 + 0x249f3c);
      (**(code **)(**(int **)(param_1 + 0x274 + iStack_14 * 4) + 0x40))();
    }
    for (iStack_14 = 0; iStack_14 < 2; iStack_14 = iStack_14 + 1) {
      pvVar2 = operator_new(400);
      uStack_8 = 1;
      if (pvVar2 == (void *)0x0) {
        uStack_84 = 0;
      }
      else {
        uStack_84 = FUN_005f5f50();
      }
      uStack_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x288 + iStack_14 * 4) = uStack_84;
      *(undefined4 *)(*(int *)(param_1 + 0x288 + iStack_14 * 4) + 4) = *(undefined4 *)(param_1 + 4);
      FUN_005eaf00(iStack_14 + 0x249f3f);
      (**(code **)(**(int **)(param_1 + 0x288 + iStack_14 * 4) + 0x40))();
      pvVar2 = operator_new(400);
      uStack_8 = 2;
      if (pvVar2 == (void *)0x0) {
        uStack_88 = 0;
      }
      else {
        uStack_88 = FUN_005f5f50();
      }
      uStack_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x280 + iStack_14 * 4) = uStack_88;
      *(undefined4 *)(*(int *)(param_1 + 0x280 + iStack_14 * 4) + 4) = *(undefined4 *)(param_1 + 4);
      FUN_005eaf00(iStack_14 + 0x249f42);
      (**(code **)(**(int **)(param_1 + 0x280 + iStack_14 * 4) + 0x40))();
    }
    pvVar2 = operator_new(400);
    uStack_8 = 3;
    if (pvVar2 == (void *)0x0) {
      uStack_8c = 0;
    }
    else {
      uStack_8c = FUN_005f5f50();
    }
    uStack_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x290) = uStack_8c;
    *(undefined4 *)(*(int *)(param_1 + 0x290) + 4) = *(undefined4 *)(param_1 + 4);
    FUN_005eaf00(0x249f41);
    (**(code **)(**(int **)(param_1 + 0x290) + 0x40))();
    pvVar2 = operator_new(400);
    uStack_8 = 4;
    if (pvVar2 == (void *)0x0) {
      uStack_90 = 0;
    }
    else {
      uStack_90 = FUN_005f5f50();
    }
    uStack_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x294) = uStack_90;
    *(undefined4 *)(*(int *)(param_1 + 0x294) + 4) = *(undefined4 *)(param_1 + 4);
    FUN_005eaf00(0x249f44);
    (**(code **)(**(int **)(param_1 + 0x294) + 0x40))();
    FUN_005eae80(0x249f3c,0,0,50000,0);
    FUN_005eae80(0x249f3d,0,0,51000,0);
    FUN_005eae80(0x249f3e,0,0,52000,0);
    FUN_005eae80(0x249f42,0,0,53000,0);
    FUN_005eae80(0x249f43,0,0,53000,0);
    FUN_005eae80(0x249f3f,0,0,54000,0);
    FUN_005eae80(0x249f40,0,0,55000,0);
    FUN_005eae80(0x249f41,0,0,56000,0);
    FUN_005eae80(0x249f44,0,0,60000,0);
    (**(code **)(**(int **)(param_1 + 0x274) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x278) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x280) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x288) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x290) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x294) + 0x74))();
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f62,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(1,6);
    break;
  case 1:
    pvVar2 = operator_new(0x20);
    uStack_8 = 5;
    if (pvVar2 == (void *)0x0) {
      uStack_94 = 0;
    }
    else {
      uStack_94 = FUN_00600f30(0xb,0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_94);
    pvVar2 = operator_new(0x20);
    uStack_8 = 6;
    if (pvVar2 == (void *)0x0) {
      uStack_98 = 0;
    }
    else {
      uStack_98 = FUN_00600f30(0xb,*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_98);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(2);
    break;
  case 2:
    pvVar2 = operator_new(0x20);
    uStack_8 = 7;
    if (pvVar2 == (void *)0x0) {
      uStack_9c = 0;
    }
    else {
      uStack_9c = FUN_00600f30(0xf,*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_9c);
    pvVar2 = operator_new(0x20);
    uStack_8 = 8;
    if (pvVar2 == (void *)0x0) {
      uStack_a0 = 0;
    }
    else {
      uStack_a0 = FUN_00600f30(0xf,0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_a0);
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f63,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(3);
  case 3:
    iVar1 = FUN_005eb220();
    if (iVar1 == 0xf) {
      (**(code **)(**(int **)(param_1 + 0x280) + 0x70))();
      (**(code **)(**(int **)(param_1 + 0x284) + 0x74))();
      pvVar2 = operator_new(0x20);
      uStack_8 = 9;
      if (pvVar2 == (void *)0x0) {
        uStack_a4 = 0;
      }
      else {
        uStack_a4 = FUN_00600f30(0x12,*(undefined4 *)(param_1 + 0x17c));
      }
      uStack_8 = 0xffffffff;
      FUN_005f5d50(uStack_a4);
      pvVar2 = operator_new(0x20);
      uStack_8 = 10;
      if (pvVar2 == (void *)0x0) {
        uStack_a8 = 0;
      }
      else {
        uStack_a8 = FUN_006010a0(0);
      }
      uStack_8 = 0xffffffff;
      FUN_005f5d50(uStack_a8);
      (**(code **)(**(int **)(param_1 + 0x17c) + 4))(4);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x17c) + 4))(3);
    }
    break;
  case 4:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f64,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(**(int **)(param_1 + 0x288) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x28c) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x27c) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(5,6);
    break;
  case 5:
    pvVar2 = operator_new(0x20);
    uStack_8 = 0xb;
    if (pvVar2 == (void *)0x0) {
      uStack_ac = 0;
    }
    else {
      uStack_ac = FUN_006010a0(0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_ac);
    (**(code **)(**(int **)(param_1 + 0x28c) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x288) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x27c) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(6,0xf);
    break;
  case 6:
    (**(code **)(**(int **)(param_1 + 0x28c) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x288) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x27c) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(7,0xf);
    break;
  case 7:
    (**(code **)(**(int **)(param_1 + 0x28c) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x288) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x27c) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(8,0xf);
    break;
  case 8:
    (**(code **)(**(int **)(param_1 + 0x28c) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x288) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x27c) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(9,0xf);
    break;
  case 9:
    (**(code **)(**(int **)(param_1 + 0x28c) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x288) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x27c) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(10,0xf);
    break;
  case 10:
    (**(code **)(**(int **)(param_1 + 0x28c) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x288) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x27c) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0xb,0xf);
    break;
  case 0xb:
    (**(code **)(**(int **)(param_1 + 0x28c) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x288) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x27c) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0xc,0xf);
    break;
  case 0xc:
    (**(code **)(**(int **)(param_1 + 0x28c) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x288) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x27c) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0xd,0xf);
    break;
  case 0xd:
    (**(code **)(**(int **)(param_1 + 0x28c) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x288) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x27c) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0xe,0xf);
    break;
  case 0xe:
    (**(code **)(**(int **)(param_1 + 0x28c) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x288) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x27c) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0xf,0xf);
    break;
  case 0xf:
    (**(code **)(**(int **)(param_1 + 0x28c) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x288) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x27c) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0x10,0x78);
    break;
  case 0x10:
    FUN_00650550(0);
  }
  ExceptionList = local_10;
  return;
}

