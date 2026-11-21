// FUN_0057eac0  0057eac0

void __fastcall FUN_0057eac0(int *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006a695a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_005fc360(DAT_00781870 ^ (uint)&stack0xfffffffc);
  switch(uVar1) {
  case 0:
    param_1[9] = 0;
    FUN_0057e4c0();
    (**(code **)(*param_1 + 4))(1);
    (**(code **)(**(int **)(param_1[8] + 0x184) + 0x74))();
    (**(code **)(**(int **)(param_1[8] + 0x18c) + 0x74))();
    (**(code **)(**(int **)(param_1[8] + 0x188) + 0x70))();
    FUN_005eaf00(0x30dfe5);
    FUN_005eaf00(0x30dfcc);
    (**(code **)(**(int **)(param_1[8] + 400) + 0x70))();
    FUN_0057e9f0(0x80);
    (**(code **)(*param_1 + 0x1c))(0x2d);
    break;
  case 1:
    FUN_005eaf00(0x30dfe6);
    (**(code **)(*param_1 + 4))(2);
    (**(code **)(*param_1 + 0x1c))(0x2d);
    break;
  case 2:
    (**(code **)(*param_1 + 4))(3);
    (**(code **)(**(int **)(param_1[8] + 0x188) + 0x74))();
    pvVar2 = operator_new(0x20);
    uStack_8 = 0;
    if (pvVar2 == (void *)0x0) {
      uStack_34 = 0;
    }
    else {
      uStack_34 = FUN_006010a0(param_1);
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_34);
    break;
  case 3:
    param_1[9] = param_1[9] + 1;
    FUN_005f5d50(0);
    (**(code **)(**(int **)(param_1[8] + 0x188) + 0xb0))(0);
    (**(code **)(**(int **)(param_1[8] + 0x188) + 0x70))();
    FUN_005eaf00(0x30dfe5);
    (**(code **)(**(int **)(param_1[8] + 400 + param_1[9] * 4) + 0xb0))
              (*(char *)(DAT_007947e0 + *(int *)(DAT_007947e0 + 0x98) * 0x14 + 0x9b + param_1[9]) +
               -1);
    (**(code **)(**(int **)(param_1[8] + 400 + param_1[9] * 4) + 0x74))();
    FUN_0057e9d0((int)*(char *)(DAT_007947e0 + *(int *)(DAT_007947e0 + 0x98) * 0x14 + 0x9b +
                               param_1[9]));
    (**(code **)(*param_1 + 4))(4);
    (**(code **)(*param_1 + 0x1c))(0x2d);
    break;
  case 4:
    (**(code **)(**(int **)(param_1[8] + 400) + 0xb0))(0);
    FUN_005eaf00(param_1[9] + 0x30dfcb);
    pvVar2 = operator_new(0x20);
    uStack_8 = 1;
    if (pvVar2 == (void *)0x0) {
      uStack_38 = 0;
    }
    else {
      uStack_38 = FUN_006010a0(param_1);
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_38);
    (**(code **)(**(int **)(param_1[8] + 400) + 0x74))();
    (**(code **)(*param_1 + 4))(5);
    break;
  case 5:
    FUN_005f5d50(0);
    if (param_1[9] == 0x14) {
      (**(code **)(*param_1 + 4))(6);
      (**(code **)(*param_1 + 0x1c))(0x5a);
    }
    else {
      (**(code **)(*param_1 + 4))(1);
      (**(code **)(*param_1 + 0x1c))(0x2d);
    }
    break;
  case 6:
    FUN_005eaf00(0x30dfe0);
    (**(code **)(**(int **)(param_1[8] + 400) + 0xb0))(0);
    pvVar2 = operator_new(0x20);
    uStack_8 = 2;
    if (pvVar2 == (void *)0x0) {
      uStack_3c = 0;
    }
    else {
      uStack_3c = FUN_006010a0(param_1);
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_3c);
    (**(code **)(*param_1 + 4))(7);
    break;
  case 7:
    FUN_005f5d50(0);
    FUN_005eaf00(0x30dfcc);
    (**(code **)(**(int **)(param_1[8] + 400) + 0xb0))(0);
    (**(code **)(**(int **)(param_1[8] + 400) + 0x70))();
    (**(code **)(**(int **)(param_1[8] + 0x18c) + 0x70))();
    (**(code **)(**(int **)(param_1[8] + 0x184) + 0x70))();
    FUN_00583aa0();
    (**(code **)(*param_1 + 4))(8);
    (**(code **)(*param_1 + 0x1c))(0x96);
    break;
  case 8:
    FUN_0057e820();
  }
  ExceptionList = local_10;
  return;
}

