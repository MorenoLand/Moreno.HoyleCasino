// FUN_005f1e60  005f1e60

undefined4 __thiscall FUN_005f1e60(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 local_3c;
  undefined4 *local_20;
  undefined4 local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9dec;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_4 == -1) {
    local_14 = -1;
  }
  else if (param_4 == -2) {
    local_14 = FUN_0060c9a0(DAT_00781870 ^ (uint)&stack0xfffffffc);
    local_14 = local_14 + -1;
  }
  else {
    iVar4 = abs(param_4);
    local_14 = 0;
    while (iVar2 = FUN_0060c9a0(), local_14 < iVar2) {
      FUN_0060ca40(local_14);
      iVar2 = FUN_005f5400();
      if (iVar2 == iVar4) break;
      local_14 = local_14 + 1;
    }
    iVar4 = FUN_0060c9a0();
    if (local_14 == iVar4) {
      ExceptionList = local_10;
      return 0;
    }
    if (param_4 < 0) {
      local_14 = local_14 + -1;
    }
  }
  if (local_14 < 0) {
    local_1c = 0;
  }
  else {
    local_1c = FUN_0060ca40(local_14);
  }
  cVar1 = (**(code **)(*param_1 + 0x3c))(param_2,&local_20);
  if (cVar1 == '\0') {
    FUN_005e9f20("false","..\\scilib\\sciroom.cpp",0x187);
    uVar7 = 0;
  }
  else {
    pvVar3 = operator_new(0x1f0);
    local_8 = 0;
    if (pvVar3 == (void *)0x0) {
      local_3c = 0;
    }
    else {
      local_3c = FUN_005fc680(*local_20,1);
    }
    local_8 = 0xffffffff;
    local_18 = (int *)FUN_005f9de0(local_3c,*local_20,local_20[1],0,0,0x2712,&PTR_006b27f8,
                                   0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
    iVar4 = FUN_0060c9a0();
    if (local_14 == iVar4 + -1) {
      piVar5 = (int *)FUN_0060ca40(local_14);
      piVar6 = (int *)FUN_0060ca40(local_14);
      uVar7 = (**(code **)(*piVar5 + 0x54))();
      iVar4 = (**(code **)(*piVar6 + 0x4c))(uVar7);
      (**(code **)(*local_18 + 0x44))(iVar4 + param_3);
    }
    else {
      if (local_14 < 0) {
        FUN_0060c7d0(local_18);
      }
      else {
        FUN_0060cb20(local_1c,local_18);
      }
      while( true ) {
        local_14 = local_14 + 1;
        iVar4 = FUN_0060c9a0();
        if (iVar4 + -1 <= local_14) break;
        piVar5 = (int *)FUN_0060ca40(local_14);
        piVar6 = (int *)FUN_0060ca40(local_14 + 1);
        uVar7 = (**(code **)(*piVar6 + 0x54))();
        uVar7 = (**(code **)(*piVar6 + 0x4c))(uVar7);
        (**(code **)(*piVar5 + 0x44))(uVar7);
      }
      iVar4 = FUN_0060c9a0();
      piVar5 = (int *)FUN_0060ca40(iVar4 + -1);
      uVar7 = (**(code **)(*piVar5 + 0x54))();
      iVar4 = (**(code **)(*piVar5 + 0x4c))(uVar7);
      (**(code **)(*piVar5 + 0x44))(iVar4 + param_3);
    }
    FUN_005f2370(*local_20,0,1);
    uVar7 = 1;
  }
  ExceptionList = local_10;
  return uVar7;
}

