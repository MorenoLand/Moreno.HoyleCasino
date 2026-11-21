// FUN_004214b0  004214b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004214b0(int *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0069e1cf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar1 = false;
  uVar3 = FUN_005fc360(DAT_00781870 ^ (uint)&stack0xfffffffc);
  switch(uVar3) {
  case 0:
    iVar4 = FUN_004269a0();
    param_1[8] = iVar4;
    for (iStack_14 = 0; iStack_14 < 4; iStack_14 = iStack_14 + 1) {
      cVar2 = FUN_005f54a0();
      if (cVar2 != '\0') {
        bVar1 = true;
      }
      (**(code **)(**(int **)(DAT_00790360 + 0x54 + iStack_14 * 4) + 0x70))();
    }
    if (bVar1) {
      (**(code **)(*DAT_0162ee84 + 0x80))(0x3106c9,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    }
    (**(code **)(*param_1 + 4))(1);
    cVar2 = FUN_00421450();
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      pvVar5 = operator_new(0x24);
      uStack_8 = 0;
      if (pvVar5 == (void *)0x0) {
        uStack_3c = 0;
      }
      else {
        uStack_3c = FUN_00421860(1,param_1);
      }
      uStack_8 = 0xffffffff;
      FUN_005fc420(uStack_3c);
    }
    break;
  case 1:
    (**(code **)(*param_1 + 4))(2);
    cVar2 = FUN_00421450();
    if (cVar2 == '\0') {
      uVar3 = FUN_006436c0();
      FUN_00426310(param_1[8],uVar3);
      FUN_0041f1b0();
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      pvVar5 = operator_new(0x24);
      uStack_8 = 1;
      if (pvVar5 == (void *)0x0) {
        uStack_40 = 0;
      }
      else {
        uStack_40 = FUN_00421b00(param_1[8],0,param_1);
      }
      uStack_8 = 0xffffffff;
      FUN_005fc420(uStack_40);
    }
    break;
  case 2:
    iVar4 = FUN_00426370(4);
    if (iVar4 == 5) {
      (**(code **)(*param_1 + 8))(3,0);
    }
    else {
      iVar4 = FUN_004269a0();
      param_1[8] = iVar4;
      (**(code **)(*param_1 + 4))(1);
      cVar2 = FUN_00421450();
      if (cVar2 == '\0') {
        (**(code **)(*param_1 + 0x1c))(3);
      }
      else {
        pvVar5 = operator_new(0x24);
        uStack_8 = 2;
        if (pvVar5 == (void *)0x0) {
          uStack_44 = 0;
        }
        else {
          uStack_44 = FUN_00421860(0,param_1);
        }
        uStack_8 = 0xffffffff;
        FUN_005fc420(uStack_44);
      }
    }
    break;
  case 3:
    (**(code **)(*param_1 + 4))(4);
    cVar2 = FUN_00421450();
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      FUN_004207f0(param_1);
    }
    break;
  case 4:
    (**(code **)(**(int **)(DAT_00790360 + 0x7c) + 0x70))();
    (**(code **)(**(int **)(DAT_00790360 + 0x78) + 0x70))();
    (**(code **)(**(int **)(DAT_00790354 + 4) + 8))(1,0);
    FUN_005fc420(0);
  }
  ExceptionList = local_10;
  return;
}

