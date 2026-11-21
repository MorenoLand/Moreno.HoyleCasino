// FUN_0067c880  0067c880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0067c880(int param_1,undefined4 param_2)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 uVar4;
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
  puStack_c = &LAB_006ada8e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006044b0(0x20564157,0x1f59,0);
  FUN_006044b0(0x20564157,0x1f5a,0);
  FUN_006044b0(0x20564157,0x1f5b,0);
  FUN_006044b0(0x20564157,0x1f5c,0);
  for (DAT_016306f0 = 0; DAT_016306f0 < 5; DAT_016306f0 = DAT_016306f0 + 1) {
    FUN_006044b0(0x20584554,DAT_016306f0 + 0x249f31,0);
  }
  switch(param_2) {
  case 0:
    for (DAT_016306f0 = 0; DAT_016306f0 < 5; DAT_016306f0 = DAT_016306f0 + 1) {
      pvVar2 = operator_new(400);
      uStack_8 = 0;
      if (pvVar2 == (void *)0x0) {
        uStack_64 = 0;
      }
      else {
        uStack_64 = FUN_005f5f50();
      }
      uStack_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x248 + DAT_016306f0 * 4) = uStack_64;
      *(undefined4 *)(*(int *)(param_1 + 0x248 + DAT_016306f0 * 4) + 4) =
           *(undefined4 *)(param_1 + 4);
      FUN_005eaf00(DAT_016306f0 + 0x249f31);
      (**(code **)(**(int **)(param_1 + 0x248 + DAT_016306f0 * 4) + 0x40))();
    }
    FUN_005eae80(0x249f31,0,0,60000,0);
    FUN_005eae80(0x249f32,0,0,55000,0);
    FUN_005eae80(0x249f33,0x1e,0,50000,0);
    FUN_005eae80(0x249f34,0x1e,0,50000,0);
    FUN_005eae80(0x249f35,0,0,50000,0);
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f59,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(**(int **)(param_1 + 0x248) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x24c) + 0x74))();
    pvVar2 = operator_new(0x20);
    uStack_8 = 1;
    if (pvVar2 == (void *)0x0) {
      uStack_68 = 0;
    }
    else {
      uStack_68 = FUN_00600f30(0xd,*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_68);
    pvVar2 = operator_new(0x20);
    uStack_8 = 2;
    if (pvVar2 == (void *)0x0) {
      uStack_6c = 0;
    }
    else {
      uStack_6c = FUN_006010a0(0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_6c);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(1);
    break;
  case 1:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f5a,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    pvVar2 = operator_new(0x20);
    uStack_8 = 3;
    if (pvVar2 == (void *)0x0) {
      uStack_70 = 0;
    }
    else {
      uStack_70 = FUN_00600f30(0x12,*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_70);
    (**(code **)(**(int **)(param_1 + 0x250) + 0x74))();
    pvVar2 = operator_new(0x20);
    uStack_8 = 4;
    if (pvVar2 == (void *)0x0) {
      uStack_74 = 0;
    }
    else {
      uStack_74 = FUN_006010a0(0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_74);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(2);
    break;
  case 2:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f5b,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    pvVar2 = operator_new(0x20);
    uStack_8 = 5;
    if (pvVar2 == (void *)0x0) {
      uStack_78 = 0;
    }
    else {
      uStack_78 = FUN_00600f30(0x30,*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_78);
    (**(code **)(**(int **)(param_1 + 0x254) + 0x74))();
    pvVar2 = operator_new(0x20);
    uStack_8 = 6;
    if (pvVar2 == (void *)0x0) {
      uStack_7c = 0;
    }
    else {
      uStack_7c = FUN_006010a0(0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_7c);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(3);
    break;
  case 3:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f5c,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    pvVar2 = operator_new(0x20);
    uStack_8 = 7;
    if (pvVar2 == (void *)0x0) {
      uStack_80 = 0;
    }
    else {
      uStack_80 = FUN_006010a0(0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_80);
    (**(code **)(**(int **)(param_1 + 600) + 0x74))();
    pvVar2 = operator_new(0x20);
    uStack_8 = 8;
    if (pvVar2 == (void *)0x0) {
      uStack_84 = 0;
    }
    else {
      uStack_84 = FUN_006010a0(*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_84);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(4);
    break;
  case 4:
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(5,0x1e);
    break;
  case 5:
    cVar1 = FUN_005eb610();
    if (cVar1 == '\x05') {
      (**(code **)(**(int **)(param_1 + 0x17c) + 4))(6);
    }
    else {
      uVar3 = FUN_005eb610();
      FUN_005eb5d0((uVar3 & 0xff) - 0x19);
      for (DAT_016306f0 = 0; DAT_016306f0 < 5; DAT_016306f0 = DAT_016306f0 + 1) {
        uVar4 = FUN_005eb610();
        FUN_005eb5d0(uVar4);
      }
      (**(code **)(**(int **)(param_1 + 0x17c) + 4))(5);
    }
    (**(code **)(**(int **)(param_1 + 0x17c) + 0x1c))(7);
    break;
  case 6:
    FUN_005f45d0(0);
    FUN_00650550(0);
  }
  ExceptionList = local_10;
  return;
}

