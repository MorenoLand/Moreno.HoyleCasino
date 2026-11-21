// FUN_0067ac60  0067ac60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0067ac60(int param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006ad8e5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  switch(param_2) {
  case 0:
    FUN_0067a950();
    pvVar1 = operator_new(400);
    uStack_8 = 0;
    if (pvVar1 == (void *)0x0) {
      uStack_4c = 0;
    }
    else {
      uStack_4c = FUN_005f5f50();
    }
    uStack_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x22c) = uStack_4c;
    *(undefined4 *)(*(int *)(param_1 + 0x22c) + 4) = *(undefined4 *)(param_1 + 4);
    FUN_005eaf00(0x249f2a);
    (**(code **)(**(int **)(param_1 + 0x22c) + 0x40))();
    FUN_005eae80(0x249f2a,0,0,0xe679,0);
    (**(code **)(**(int **)(param_1 + 0x22c) + 0x74))();
    pvVar1 = operator_new(400);
    uStack_8 = 1;
    if (pvVar1 == (void *)0x0) {
      uStack_50 = 0;
    }
    else {
      uStack_50 = FUN_005f5f50();
    }
    uStack_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x230) = uStack_50;
    *(undefined4 *)(*(int *)(param_1 + 0x230) + 4) = *(undefined4 *)(param_1 + 4);
    FUN_005eaf00(0x249f2b);
    (**(code **)(**(int **)(param_1 + 0x230) + 0x40))();
    FUN_005eae80(0x249f2b,0,0,59000,0);
    (**(code **)(**(int **)(param_1 + 0x230) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(1,0x1e);
    break;
  case 1:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f4e,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f4f,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(**(int **)(param_1 + 0x21c) + 0x74))();
    pvVar1 = operator_new(0x1c);
    uStack_8 = 2;
    if (pvVar1 == (void *)0x0) {
      uStack_54 = 0;
    }
    else {
      uStack_54 = FUN_00600b60(*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_54);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(2);
    break;
  case 2:
    FUN_005f44e0(0x1f4e,1);
    (**(code **)(**(int **)(param_1 + 0x230) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x21c) + 0x70))();
    FUN_005f5d50(0);
    (**(code **)(**(int **)(param_1 + 0x20c) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(3,0x78);
    break;
  case 3:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f50,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(**(int **)(param_1 + 0x220) + 0x74))();
    pvVar1 = operator_new(0x1c);
    uStack_8 = 3;
    if (pvVar1 == (void *)0x0) {
      uStack_58 = 0;
    }
    else {
      uStack_58 = FUN_00600b60(*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_58);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(4);
    break;
  case 4:
    FUN_005f44e0(0x1f50,1);
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f51,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(**(int **)(param_1 + 0x20c) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x220) + 0x70))();
    FUN_005f5d50(0);
    (**(code **)(**(int **)(param_1 + 0x210) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(5,1);
    break;
  case 5:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f50,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(**(int **)(param_1 + 0x224) + 0x74))();
    pvVar1 = operator_new(0x1c);
    uStack_8 = 4;
    if (pvVar1 == (void *)0x0) {
      uStack_5c = 0;
    }
    else {
      uStack_5c = FUN_00600b60(*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_5c);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(6);
    break;
  case 6:
    FUN_005f44e0(0x1f50,1);
    (**(code **)(**(int **)(param_1 + 0x210) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x224) + 0x70))();
    FUN_005f5d50(0);
    (**(code **)(**(int **)(param_1 + 0x214) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(7,1);
    break;
  case 7:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f52,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(**(int **)(param_1 + 0x228) + 0x74))();
    pvVar1 = operator_new(0x1c);
    uStack_8 = 5;
    if (pvVar1 == (void *)0x0) {
      uStack_60 = 0;
    }
    else {
      uStack_60 = FUN_00600b60(*(undefined4 *)(param_1 + 0x17c));
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_60);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(8);
    break;
  case 8:
    (**(code **)(**(int **)(param_1 + 0x214) + 0x70))(DAT_00781870 ^ (uint)&stack0xfffffffc);
    (**(code **)(**(int **)(param_1 + 0x228) + 0x70))();
    FUN_005f5d50(0);
    (**(code **)(**(int **)(param_1 + 0x218) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(9,0xd2);
    break;
  case 9:
    FUN_005f45d0(0);
    FUN_00650550(0);
  }
  ExceptionList = local_10;
  return;
}

