// FUN_0051f860  0051f860

void __fastcall FUN_0051f860(int param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a3e58;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
    iVar2 = FUN_0051f660(local_1c);
    if (iVar2 == 5) {
      local_44 = *(undefined4 *)(&DAT_00721ad4 + local_1c * 4);
    }
    else {
      local_44 = *(undefined4 *)(&DAT_00721ab4 + local_1c * 4);
    }
    pvVar3 = operator_new(0x1e8);
    local_8 = 0;
    if (pvVar3 == (void *)0x0) {
      local_48 = 0;
    }
    else {
      local_48 = FUN_005202a0(0,0x30e7fa,0);
    }
    local_8 = 0xffffffff;
    FUN_005f9de0(local_48,local_1c,local_44,0,0,1,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
                 0xffffffff,0);
    uVar7 = 1;
    uVar6 = 0;
    uVar5 = 1;
    uVar4 = 0;
    FUN_005fb300(local_1c);
    FUN_006023d0(uVar4,uVar5,uVar6,uVar7);
    uVar4 = 1;
    FUN_005fb300(local_1c);
    FUN_005eb700(uVar4);
    uVar4 = 0x80;
    FUN_005fb300(local_1c);
    FUN_005eb720(uVar4);
  }
  for (local_1c = 0; local_1c < 6; local_1c = local_1c + 1) {
    if (*(int *)(param_1 + 0x94 + local_1c * 4) == 0) {
      pvVar3 = operator_new(0x184);
      local_8 = 1;
      if (pvVar3 == (void *)0x0) {
        local_4c = 0;
      }
      else {
        local_4c = FUN_005f5bf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x94 + local_1c * 4) = local_4c;
      FUN_005eae80(*(undefined4 *)(&DAT_00721aa0 + local_1c * 4),2,0,2,0xffffffff);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x94 + local_1c * 4) + 0x178) = 5;
    (**(code **)(**(int **)(param_1 + 0x94 + local_1c * 4) + 0x70))(uVar1);
    pvVar3 = operator_new(0x1c);
    local_8 = 2;
    if (pvVar3 == (void *)0x0) {
      local_50 = 0;
    }
    else {
      local_50 = FUN_00600a70(0);
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_50);
  }
  FUN_005f9ce0(0,0xd,0x30e7a0,0,0,1,0,0xff,0);
  pvVar3 = operator_new(0x1dc);
  local_8 = 3;
  if (pvVar3 == (void *)0x0) {
    local_54 = 0;
  }
  else {
    local_54 = FUN_00520380();
  }
  local_8 = 0xffffffff;
  FUN_005f9de0(local_54,0x10,0x30e7fc,0,0,1,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
               0xffffffff,0);
  uVar7 = 1;
  uVar6 = 0;
  uVar5 = 1;
  uVar4 = 0;
  FUN_005fb300(0x10);
  FUN_006023d0(uVar4,uVar5,uVar6,uVar7);
  uVar4 = 1;
  FUN_005fb300(0x10);
  FUN_005eb700(uVar4);
  uVar4 = 0x80;
  FUN_005fb300(0x10);
  FUN_005eb720(uVar4);
  ExceptionList = local_10;
  return;
}

