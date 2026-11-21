// FUN_005d8230  005d8230

void __fastcall FUN_005d8230(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_40;
  undefined4 *local_3c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9169;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0064ce60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  cVar2 = (**(code **)(*DAT_0162ee84 + 0x33c))(0xffffffff);
  if (cVar2 != '\0') {
    FUN_005d9960();
  }
  local_3c = operator_new(0x184);
  local_8 = 0;
  if (local_3c == (undefined4 *)0x0) {
    local_3c = (undefined4 *)0x0;
  }
  else {
    FUN_005f5bf0();
    *local_3c = MenuFrame::vftable;
  }
  local_8 = 0xffffffff;
  param_1[0x1c] = (int)local_3c;
  uVar9 = 0xffffffff;
  uVar8 = 9999;
  uVar7 = 0x1c2;
  uVar6 = 0;
  iVar3 = FUN_0060c9a0(0,0x1c2,9999,0xffffffff);
  FUN_005eae80((iVar3 < 5) + 0x30d414,uVar6,uVar7,uVar8,uVar9);
  cVar2 = (**(code **)(*DAT_0162ee84 + 0x33c))(0xffffffff);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*param_1 + 0x268))();
    if (cVar2 != '\0') goto LAB_005d8341;
    (**(code **)(*(int *)param_1[0x1c] + 0x70))();
  }
  else {
LAB_005d8341:
    (**(code **)(*(int *)param_1[0x1c] + 0x74))();
  }
  cVar2 = (**(code **)(*param_1 + 0x268))();
  if (cVar2 != '\0') {
    pvVar4 = operator_new(0x20);
    local_8 = 1;
    if (pvVar4 == (void *)0x0) {
      local_40 = 0;
    }
    else {
      local_40 = FUN_006010a0(0);
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_40);
  }
  cVar2 = FUN_005da810();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*DAT_0162ee84 + 0x33c))(0xffffffff);
    if (cVar2 == '\0') goto LAB_005d8406;
  }
  FUN_005f2ba0(0x1399);
LAB_005d8406:
  cVar2 = FUN_005da810();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*DAT_0162ee84 + 0x33c))(0xffffffff);
    if (cVar2 != '\0') {
      piVar5 = (int *)(**(code **)(*DAT_0162ee84 + 0xe8))();
      iVar3 = (**(code **)(*piVar5 + 0x28))();
      if (iVar3 == 1) {
        FUN_005f2b20(0x1399,1);
      }
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x2ac))();
  if (cVar2 != '\0') {
    FUN_005da3d0();
  }
  (**(code **)(*param_1 + 0x2e0))();
  cVar2 = FUN_005da810();
  if (cVar2 == '\0') {
    local_14 = 0;
    while( true ) {
      iVar3 = (**(code **)(*DAT_0162ee84 + 0x10c))();
      if (iVar3 <= local_14) break;
      FUN_005dcb00(local_14);
      piVar5 = (int *)FUN_0063aac0();
      if (*piVar5 == 2) {
LAB_005d851e:
        bVar1 = true;
      }
      else {
        piVar5 = (int *)FUN_0063aac0();
        if (*piVar5 == 3) goto LAB_005d851e;
        bVar1 = false;
      }
      if (bVar1) {
        FUN_005dcb00(local_14);
        cVar2 = FUN_005d6e70();
        if (cVar2 != '\0') {
          uVar6 = 0;
          FUN_005dcb00(local_14,0);
          FUN_005d6ee0(uVar6);
          FUN_005dcb00(local_14);
          iVar3 = FUN_0063aac0();
          FUN_005dc520(iVar3 + 4);
        }
        FUN_005dcb00(local_14);
        cVar2 = FUN_005d6f90();
        if (cVar2 != '\0') {
          uVar6 = FUN_005dcb00(local_14);
          FUN_005dc3e0(uVar6);
        }
      }
      local_14 = local_14 + 1;
    }
  }
  FUN_005e74c0();
  ExceptionList = local_10;
  return;
}

