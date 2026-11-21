// FUN_0066ade0  0066ade0

void FUN_0066ade0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *local_30;
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006acd41;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0064ce60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  puVar1 = (undefined4 *)(**(code **)(*DAT_0162ee84 + 0x2e4))(local_20);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar9 = 0;
  uVar8 = 0xff;
  uVar7 = 0;
  uVar6 = 10;
  local_18 = uVar4;
  local_14 = uVar5;
  uVar2 = (**(code **)(*DAT_0162ee84 + 0x2dc))(uVar4,uVar5,10,0,0xff,0);
  FUN_005f9ce0(0,0,uVar2,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  iVar3 = (**(code **)(*DAT_0162ee84 + 0x2e0))();
  if (iVar3 != 0) {
    uVar9 = 0;
    uVar8 = 0xff;
    uVar7 = 0;
    uVar6 = 0xb;
    uVar2 = 0;
    uVar5 = 0;
    uVar4 = (**(code **)(*DAT_0162ee84 + 0x2e0))(0,0,0xb,0,0xff,0);
    FUN_005f9ce0(0,1,uVar4,uVar5,uVar2,uVar6,uVar7,uVar8,uVar9);
  }
  local_30 = operator_new(0x20);
  local_8 = 0;
  if (local_30 == (undefined4 *)0x0) {
    local_30 = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_30 = CreditsRoomScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005f1b70(local_30);
  ExceptionList = local_10;
  return;
}

