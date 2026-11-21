// FUN_005d1db0  005d1db0

void __fastcall FUN_005d1db0(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *local_64;
  int *local_5c;
  int local_3c [10];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8e83;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_3c[0] = -1;
  local_3c[1] = 0x30d46c;
  local_3c[2] = 0x30d46d;
  local_3c[3] = 0x30d46e;
  local_3c[4] = 0x30d46f;
  local_3c[5] = 0x30d470;
  local_3c[6] = 0x30d471;
  local_3c[7] = 0x30d472;
  local_3c[8] = 0x30d473;
  for (local_3c[9] = 0; local_3c[9] < *(int *)(param_1 + 0x84); local_3c[9] = local_3c[9] + 1) {
    FUN_005fbcb0(0,local_3c[9] + 100);
  }
  pvVar1 = operator_new(0x178);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_5c = (int *)0x0;
  }
  else {
    local_5c = (int *)FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  local_14 = local_5c;
  (**(code **)(*local_5c + 0x40))();
  FUN_005eaf00(local_3c[*(int *)(param_1 + 0x80)]);
  iVar2 = FUN_005eb240();
  *(int *)(param_1 + 0x84) = iVar2 + 1;
  if (local_14 != (int *)0x0) {
    (**(code **)*local_14)(1);
  }
  for (local_3c[9] = 0; local_3c[9] < *(int *)(param_1 + 0x84); local_3c[9] = local_3c[9] + 1) {
    local_64 = operator_new(0x1dc);
    local_8 = 1;
    if (local_64 == (undefined4 *)0x0) {
      local_64 = (undefined4 *)0x0;
    }
    else {
      FUN_00601a80();
      *local_64 = CasinoNavButton::vftable;
    }
    local_8 = 0xffffffff;
    FUN_005f9de0(local_64,local_3c[9] + 100,local_3c[*(int *)(param_1 + 0x80)],0,0,1,&PTR_006b27f8,
                 0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
    iVar2 = local_3c[9];
    iVar3 = local_3c[9];
    iVar4 = local_3c[9];
    iVar5 = local_3c[9];
    FUN_005fb300(local_3c[9] + 100);
    FUN_006023d0(iVar2,iVar3,iVar4,iVar5);
    FUN_005fb300(local_3c[9] + 100);
    FUN_00602eb0();
    uVar6 = 0;
    FUN_005fb300(local_3c[9] + 100);
    FUN_00602790(uVar6);
    uVar6 = 1;
    FUN_005fb300(local_3c[9] + 100);
    FUN_005eb700(uVar6);
  }
  ExceptionList = local_10;
  return;
}

