// FUN_005640f0  005640f0

void __fastcall FUN_005640f0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5b01;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_1c = 0; local_1c < 0x31; local_1c = local_1c + 1) {
    pvVar2 = operator_new(0x17c);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_48 = 0;
    }
    else {
      local_48 = FUN_00563b40();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 4 + local_1c * 4) = local_48;
    FUN_005eae80(0x31222a,0,0,0x14,0xffffffff);
    (**(code **)(**(int **)(param_1 + 4 + local_1c * 4) + 0xb0))(local_1c << 1);
    *(int *)(*(int *)(param_1 + 4 + local_1c * 4) + 0x178) = local_1c;
    iVar3 = (**(code **)(**(int **)(param_1 + 4 + local_1c * 4) + 0x54))();
    (**(code **)(**(int **)(param_1 + 4 + local_1c * 4) + 0x50))(iVar3 + -6);
    for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
      FUN_00564450(local_1c,local_20,&local_18,&local_14);
      pvVar2 = operator_new(0x178);
      local_8 = 1;
      if (pvVar2 == (void *)0x0) {
        local_4c = 0;
      }
      else {
        local_4c = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 200 + local_1c * 0x14 + local_20 * 4) = local_4c;
      FUN_005eae80(0x312236,local_18,local_14,0x1e,0xffffffff);
      (**(code **)(**(int **)(param_1 + 200 + local_1c * 0x14 + local_20 * 4) + 0xb0))(0x35);
    }
    pvVar2 = operator_new(0x40);
    local_8 = 2;
    if (pvVar2 == (void *)0x0) {
      local_50 = 0;
    }
    else {
      local_50 = FUN_005655d0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x49c + local_1c * 4) = local_50;
    FUN_005656f0();
    FUN_00565a50(local_1c + 100);
    FUN_005664c0(0);
    FUN_005658c0(0x28);
    *(undefined4 *)(param_1 + 0x6bc + local_1c * 4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x780 + local_1c * 4) = 0;
  }
  pvVar2 = operator_new(0x24);
  local_8 = 3;
  if (pvVar2 == (void *)0x0) {
    local_54 = 0;
  }
  else {
    local_54 = FUN_00563580(uVar1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x560) = local_54;
  FUN_00563710();
  FUN_00563ad0();
  *(undefined1 *)(param_1 + 0x90c) = 1;
  ExceptionList = local_10;
  return;
}

