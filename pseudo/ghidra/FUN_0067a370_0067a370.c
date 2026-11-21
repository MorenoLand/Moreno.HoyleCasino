// FUN_0067a370  0067a370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0067a370(int param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006ad857;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006044b0(0x20564157,0x1f53,0);
  FUN_006044b0(0x20564157,0x1f54,0);
  FUN_006044b0(0x20564157,0x1f55,0);
  FUN_006044b0(0x20584554,0x249f20,0);
  FUN_006044b0(0x20584554,0x249f21,0);
  switch(param_2) {
  case 0:
    DAT_016306e0 = 0;
    pvVar1 = operator_new(400);
    uStack_8 = 0;
    if (pvVar1 == (void *)0x0) {
      uStack_48 = 0;
    }
    else {
      uStack_48 = FUN_005f5f50();
    }
    uStack_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x204) = uStack_48;
    *(undefined4 *)(*(int *)(param_1 + 0x204) + 4) = *(undefined4 *)(param_1 + 4);
    FUN_005eaf00(0x249f20);
    (**(code **)(**(int **)(param_1 + 0x204) + 0x40))();
    FUN_005eae80(0x249f20,0,0x149,59000,0);
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f53,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(**(int **)(param_1 + 0x204) + 0x74))();
    *(undefined4 *)(*(int *)(param_1 + 0x204) + 0x184) = 2;
    *(undefined4 *)(*(int *)(param_1 + 0x204) + 0x188) = 10;
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(1,0x1e);
    break;
  case 1:
    pvVar1 = operator_new(0x2c);
    uStack_8 = 1;
    if (pvVar1 == (void *)0x0) {
      uStack_4c = 0;
    }
    else {
      uStack_4c = FUN_00606e60(0,0,0,0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f6050(uStack_4c);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(2,0x5a);
    break;
  case 2:
    pvVar1 = operator_new(400);
    uStack_8 = 2;
    if (pvVar1 == (void *)0x0) {
      uStack_50 = 0;
    }
    else {
      uStack_50 = FUN_005f5f50();
    }
    uStack_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x208) = uStack_50;
    *(undefined4 *)(*(int *)(param_1 + 0x208) + 4) = *(undefined4 *)(param_1 + 4);
    FUN_005eaf00(0x249f21);
    (**(code **)(**(int **)(param_1 + 0x208) + 0x40))();
    FUN_005eae80(0x249f21,0,0,60000,0);
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f54,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(**(int **)(param_1 + 0x208) + 0x74))();
    pvVar1 = operator_new(0x1c);
    uStack_8 = 3;
    if (pvVar1 == (void *)0x0) {
      uStack_54 = 0;
    }
    else {
      uStack_54 = FUN_00600b60(*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_54);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(3);
    break;
  case 3:
    FUN_005f5d50(0);
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f55,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(**(int **)(param_1 + 0x208) + 0xb0))(0x2c);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(4,0x1e);
    break;
  case 4:
    if (DAT_016306e0 == 3) {
      DAT_016306e0 = DAT_016306e0 + 1;
      (**(code **)(**(int **)(param_1 + 0x17c) + 8))(5,0);
    }
    else {
      DAT_016306e0 = DAT_016306e0 + 1;
      (**(code **)(**(int **)(param_1 + 0x208) + 0xb0))(0x19);
      (**(code **)(**(int **)(param_1 + 0x17c) + 8))(3,0x1e);
    }
    break;
  case 5:
    (**(code **)(**(int **)(param_1 + 0x208) + 0x70))();
    pvVar1 = operator_new(0x2c);
    uStack_8 = 4;
    if (pvVar1 == (void *)0x0) {
      uStack_58 = 0;
    }
    else {
      uStack_58 = FUN_00606e60(*(undefined4 *)(param_1 + 0x17c),0,0x154,0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f6050(uStack_58);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(6);
    break;
  case 6:
    FUN_005f45d0(0);
    FUN_00650550(0);
  }
  ExceptionList = local_10;
  return;
}

