// FUN_00410e90  00410e90

void __fastcall FUN_00410e90(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0069dc89;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = FUN_005fc360(DAT_00781870 ^ (uint)&stack0xfffffffc);
  switch(uVar3) {
  case 0:
    (**(code **)(*param_1 + 4))(1);
    (**(code **)(*param_1 + 0x1c))(0);
    break;
  case 1:
    (**(code **)(*param_1 + 4))(2);
    if (*(int *)(*(int *)(DAT_00790324 + 0x464) + 0x808) < 0) {
      FUN_00418f50();
    }
    if (*(int *)(DAT_00790324 + 0x4d4) == 2) {
      FUN_005cd7c0(0xcc1a,param_1,0);
    }
    else {
      (**(code **)(*param_1 + 0x1c))(0);
    }
    break;
  case 2:
    (**(code **)(*param_1 + 4))(3);
    cVar2 = FUN_00410e00();
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      pvVar4 = operator_new(0x24);
      uStack_8 = 0;
      if (pvVar4 == (void *)0x0) {
        uStack_3c = 0;
      }
      else {
        uStack_3c = FUN_004103e0(1,param_1);
      }
      uStack_8 = 0xffffffff;
      FUN_005fc420(uStack_3c);
    }
    break;
  case 3:
    (**(code **)(*param_1 + 4))(4);
    cVar2 = FUN_00410e00();
    if (cVar2 == '\0') {
      uVar5 = 0xffffffff;
      uVar3 = FUN_006436c0(0xffffffff);
      FUN_00419670(param_1[9],uVar3,uVar5);
      FUN_0040cc00();
      cVar2 = FUN_00418e20();
      if (cVar2 != '\0') {
        FUN_005eaf00(0x13b1);
        (**(code **)(**(int **)(DAT_0079032c + 0x44) + 0x74))();
      }
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      pvVar4 = operator_new(0x28);
      uStack_8 = 1;
      if (pvVar4 == (void *)0x0) {
        uStack_40 = 0;
      }
      else {
        uStack_40 = FUN_004106f0(param_1[9],1,param_1);
      }
      uStack_8 = 0xffffffff;
      FUN_005fc420(uStack_40);
    }
    break;
  case 4:
    (**(code **)(*param_1 + 4))(5);
    cVar2 = FUN_00410e00();
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      FUN_0040eb40(param_1);
    }
    break;
  case 5:
    (**(code **)(*param_1 + 4))(6);
    (**(code **)(**(int **)(DAT_0079032c + 0x40) + 0x70))();
    (**(code **)(**(int **)(DAT_0079032c + 0x3c) + 0x70))();
    *(undefined1 *)(DAT_00790324 + 0x4d8) = 0;
    cVar2 = FUN_0041b990(param_1[9],0xffffffff);
    iVar1 = DAT_00790324;
    if (cVar2 == '\0') {
      if (((param_1[9] == 4) || (*(int *)(DAT_00790324 + 0x4d4) == 2)) ||
         (*(char *)(DAT_00790324 + 0x118 + param_1[9] * 0x118) != '\0')) {
        (**(code **)(*param_1 + 0x1c))(0);
      }
      else {
        *(undefined4 *)(DAT_00790324 + 0x4ec) = 0xb;
        *(undefined4 *)(iVar1 + 0x4f0) = 4;
        FUN_00413790(param_1);
      }
    }
    else if (param_1[9] == 4) {
      FUN_005cd7c0(0xcb9d,param_1,0);
    }
    else {
      iVar1 = param_1[9];
      if (iVar1 == -1) {
        iStack_2c = -1;
      }
      else {
        if (iVar1 == 4) {
          iStack_44 = 0;
        }
        else {
          iStack_44 = (int)*(char *)(DAT_00790324 + 0x119 + iVar1 * 0x118);
        }
        iStack_2c = iStack_44;
      }
      FUN_0040e190(iStack_2c,1);
      FUN_005cd7c0(0xcc65,param_1,0);
    }
    break;
  case 6:
    if (param_1[4] != 0) {
      (**(code **)(*(int *)param_1[4] + 0x1c))(0);
      FUN_005fc420(0);
    }
  }
  ExceptionList = local_10;
  return;
}

