// FUN_005e6890  005e6890

undefined4 * __fastcall FUN_005e6890(undefined4 *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9958;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005f71f0(1,0);
  local_8 = 0;
  *param_1 = CasinoHallOfFameDialog::vftable;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    param_1[local_14 + 0x70] = 0;
    param_1[local_14 + 0x7a] = 0;
    param_1[local_14 + 0x84] = 0;
  }
  pvVar2 = operator_new(0x28);
  param_1[0x8e] = pvVar2;
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    uVar3 = (**(code **)(*DAT_0162ee84 + 0x31c))(uVar1);
    *(undefined4 *)(param_1[0x8e] + local_14 * 4) = uVar3;
    *(undefined4 *)(*(int *)(param_1[0x8e] + local_14 * 4) + 0x20) = 0;
    *(undefined4 *)(*(int *)(param_1[0x8e] + local_14 * 4) + 0xc) = 0xffffffff;
  }
  ExceptionList = local_10;
  return param_1;
}

