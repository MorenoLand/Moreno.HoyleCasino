// FUN_0067ffa0  0067ffa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0067ffa0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006adcd3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    FUN_006044b0(0x20584554,local_14 + 0x249f45,0);
    FUN_006044b0(0x20584554,local_14 + 0x249f51,0);
  }
  FUN_006044b0(0x20584554,0x249f5d,0);
  FUN_006044b0(0x20564157,0x1f69,0);
  switch(param_2) {
  case 0:
    FUN_0067f900();
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(1,2);
    break;
  case 1:
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(2);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (*(undefined4 *)(param_1 + 0x2a0),0,0,5,1,0x3f800000,_DAT_006b3654,0);
    for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
      iVar2 = FUN_0062fbf0(3);
      *(int *)(*(int *)(param_1 + 0x1f8 + local_14 * 4) + 0x184) = iVar2 + 8;
      pvVar3 = operator_new(0x2c);
      uStack_8 = 0;
      if (pvVar3 == (void *)0x0) {
        uStack_4c = 0;
      }
      else {
        uStack_4c = FUN_00606e60(0,10,0x1ea,0);
      }
      uStack_8 = 0xffffffff;
      FUN_005f6050(uStack_4c);
    }
    for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
      pvVar3 = operator_new(0x2c);
      uStack_8 = 1;
      if (pvVar3 == (void *)0x0) {
        uStack_50 = 0;
      }
      else {
        uVar7 = 0;
        uVar6 = 0xffffff9c;
        uVar5 = FUN_005f8550(0xffffff9c,0);
        uVar5 = FUN_0062fbf0(uVar5);
        uStack_50 = FUN_00606e60(0,uVar5,uVar6,uVar7);
      }
      uStack_8 = 0xffffffff;
      FUN_005f6050(uStack_50);
      iVar2 = FUN_0062fbf0(4);
      *(int *)(*(int *)(param_1 + 0x198 + local_14 * 4) + 0x184) = iVar2 + 4;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x1c4) + 0x184) = 0xc;
    pvVar3 = operator_new(0x2c);
    uStack_8 = 2;
    if (pvVar3 == (void *)0x0) {
      uStack_54 = 0;
    }
    else {
      uVar7 = 0;
      uVar6 = 0xffffff9c;
      uVar5 = FUN_005f8550(0xffffff9c,0);
      uVar5 = FUN_0062fbf0(uVar5);
      uStack_54 = FUN_00606e60(*(undefined4 *)(param_1 + 0x17c),uVar5,uVar6,uVar7);
    }
    uStack_8 = 0xffffffff;
    FUN_005f6050(uStack_54);
    pvVar3 = operator_new(0x1c);
    uStack_8 = 3;
    if (pvVar3 == (void *)0x0) {
      uStack_58 = 0;
    }
    else {
      uStack_58 = FUN_00600a70(0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_58);
    for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
      pvVar3 = operator_new(0x20);
      uStack_8 = 4;
      if (pvVar3 == (void *)0x0) {
        piStack_5c = (int *)0x0;
      }
      else {
        piStack_5c = (int *)FUN_006010a0(0);
      }
      uStack_8 = 0xffffffff;
      FUN_005f5d50(piStack_5c);
      (**(code **)(*piStack_5c + 4))(*(undefined4 *)(param_1 + 0x1c8 + local_14 * 4),1);
    }
    break;
  case 2:
    cVar1 = FUN_005eb610();
    if (cVar1 == '\x05') {
      (**(code **)(**(int **)(param_1 + 0x17c) + 4))(3);
    }
    else {
      uVar4 = FUN_005eb610();
      FUN_005eb5d0((uVar4 & 0xff) - 0x32);
      for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
        uVar5 = FUN_005eb610();
        FUN_005eb5d0(uVar5);
      }
      (**(code **)(**(int **)(param_1 + 0x17c) + 4))(2);
    }
    (**(code **)(**(int **)(param_1 + 0x17c) + 0x1c))(5);
    break;
  case 3:
    FUN_00650550(0);
  }
  ExceptionList = local_10;
  return;
}

