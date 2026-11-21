// FUN_005d1750  005d1750

void __fastcall FUN_005d1750(int *param_1)

{
  char cVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *local_7c;
  undefined4 *local_6c;
  undefined4 local_68;
  undefined4 local_60;
  int local_38 [10];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8e52;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_38[0] = 3;
  local_38[1] = 7;
  local_38[2] = 5;
  local_38[3] = 6;
  local_38[4] = 4;
  local_38[5] = 2;
  local_38[6] = 8;
  local_38[7] = 1;
  local_38[8] = 0;
  FUN_005d8230(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (DAT_00795f95 != '\0') {
    FUN_005d2040();
    (**(code **)(*DAT_0162ee84 + 900))();
  }
  pvVar2 = operator_new(0x184);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_60 = 0;
  }
  else {
    local_60 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  FUN_005f9ce0(local_60,0,0x30d474,0,0,2000,0,0xff,0);
  piVar3 = (int *)FUN_005fb2b0(0);
  (**(code **)(*piVar3 + 0x70))();
  pvVar2 = operator_new(0x184);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_68 = 0;
  }
  else {
    local_68 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  FUN_005f9ce0(local_68,1,0x30d475,0,0,0x7d1,0,0xff,0);
  for (local_38[9] = 0; local_38[9] < 9; local_38[9] = local_38[9] + 1) {
    local_6c = operator_new(0x1dc);
    local_8 = 2;
    if (local_6c == (undefined4 *)0x0) {
      local_6c = (undefined4 *)0x0;
    }
    else {
      FUN_00601a80();
      *local_6c = CasinoNavMapButton::vftable;
    }
    local_8 = 0xffffffff;
    FUN_005f9de0(local_6c,local_38[9],0x30d478,0,0,((local_38[9] != 7) - 1 & 5) + 0x7d3,
                 &PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
    iVar7 = local_38[local_38[9]];
    iVar6 = local_38[local_38[9]];
    iVar5 = local_38[local_38[9]];
    iVar4 = local_38[local_38[9]];
    FUN_005fb300(local_38[9]);
    FUN_006023d0(iVar4,iVar5,iVar6,iVar7);
    FUN_005fb300(local_38[9]);
    FUN_00602eb0();
    uVar8 = 0;
    FUN_005fb300(local_38[9]);
    FUN_00602790(uVar8);
    uVar8 = 1;
    FUN_005fb300(local_38[9]);
    FUN_005eb700(uVar8);
    piVar3 = (int *)FUN_005fb300(local_38[9]);
    (**(code **)(*piVar3 + 0x70))();
  }
  FUN_005f9ce0(0,2,0x30d476,0,0,0x7da,0,0xff,0);
  piVar3 = (int *)FUN_005fb2b0(2);
  (**(code **)(*piVar3 + 0x70))();
  FUN_005f9ce0(0,3,0x30d477,0,0,0x7d2,0,0xff,0);
  piVar3 = (int *)FUN_005fb2b0(3);
  (**(code **)(*piVar3 + 0x70))();
  cVar1 = FUN_00636760();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x16c))(1,0,0xffffffff,0xffffffff,0);
  }
  local_7c = operator_new(0x20);
  local_8 = 3;
  if (local_7c == (undefined4 *)0x0) {
    local_7c = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_7c = CasinoNavigationRoomScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005f1b70(local_7c);
  ExceptionList = local_10;
  return;
}

