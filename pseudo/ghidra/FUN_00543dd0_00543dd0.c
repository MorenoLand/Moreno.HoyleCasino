// FUN_00543dd0  00543dd0

void __fastcall FUN_00543dd0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_28;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4f5c;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
      pvVar2 = operator_new(0x1a8);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_28 = 0;
      }
      else {
        local_28 = FUN_00545f70(uVar1);
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x44 + local_14 * 0x18 + local_18 * 4) = local_28;
      uVar7 = 0xffffffff;
      uVar6 = 10;
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = FUN_00543d20(local_14,0);
      FUN_005eae80(uVar3,uVar4,uVar5,uVar6,uVar7);
      (**(code **)(**(int **)(param_1 + 0x44 + local_14 * 0x18 + local_18 * 4) + 0x70))();
    }
  }
  ExceptionList = local_10;
  return;
}

